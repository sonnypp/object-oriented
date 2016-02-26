
#include<iostream>
#include<string>
#include<queue>
using namespace std;
int t=0;//创建全局变量，来计算一个数的有几位数 
queue<string>key;//设全局的队列queue 


//创建Scan的类 
class Scan
{
    //定义一个处理字符串的函数 
    public:
        void ToStringQueue(string input);
};


//对函数进行封装 
void Scan::ToStringQueue(string input)
{
    int l=input.length(); //测出字符串的长度 
    string tmp="";
    for(int i=0;i<l;i++) 
    {
        if(t>10) //如果数字的位数超过10 就产生错误； 
        {
            cout<<"Error"<<endl;
            break;
        }
        if(input[i]=='-' || input[i]=='+' || input[i]=='(' || input[i]==')' || input[i]=='/' || input[i]=='*') //判断是否有字符 
        {
            t=0; 
            if(tmp!="")
            {
               key.push(tmp);//将已有的数据存入队列 
		    }
		    tmp=""; //置空 
            tmp+=input[i];
            key.push(tmp);//讲一个一个不同于数字的运算符存入队列 
            tmp="";//再次置空 
        }
        else if(input[i]>=0||input[i]<=9)  //判断是数字 
        {
            t++;//计算连续数字的个数 
            tmp+=input[i];//将连续数字存在一起 
            continue;
        }
    } 
    key.push(tmp);// 处理最后面的数字传入队列 
    tmp="";
}


//创建一个Print的类 
class Print
{
	//在类中定义一个输出队列的函数 
    public:
        void PrintStringQueue();
};

//对Print的类进行封装 
void Print::PrintStringQueue()
{
    if(t<=10)
    {
        while(!key.empty()) //判断key队列是否为空 
        {
            cout<<key.front()<<endl; //一个一个的输出 
            key.pop();//删除最先那个；因为queue队列是front in front out。 
        }
    }
}

