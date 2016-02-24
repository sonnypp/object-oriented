#include<iostream> 
#include<string> 
#include<string>
#include<queue>
using namespace std;

queue<string>key;
//创建一个Scan类 
class Scan
{
	// 在类中定义一个ToStringQueue的函数 
	public:
		void ToStringQueue(string input);
};


// 将输入的字符串拆分并存在queue里 
void Scan::ToStringQueue(string input)
{
	int l = input.length();   //字符串的长度 
	for(int i = 0 ; i < l;)
	{
	    string tmp="";
        while(i<l&&input[i]>='0'&&input[i]<='9')
            tmp+=input[i++];  //将数字存在一起 
        if(tmp!="")
            key.push(tmp);  //加入到队列 
        while(i<l&&(input[i]<'0'||input[i]>'9'))
        {
        	tmp="";  //将tmp中原有的数据弄成空值 
        	tmp+=input[i++];
            key.push(tmp); //将不是数字的字符一个一个加入到队列 
            tmp="";
        }
	}
}



//创建一个 Print类 
class Print
{
	//定义一个打印queue的函数 
	public:
		void PirntStringQueue()
		{
	  
	         while(!key.empty())
	        {
		            cout<<key.front()<<endl;  //输出队列。 
		            key.pop();
            }
        }
};

