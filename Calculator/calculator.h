
#include<iostream>
#include<string>
#include<queue>
using namespace std;
int t=0;//����ȫ�ֱ�����������һ�������м�λ�� 
queue<string>key;//��ȫ�ֵĶ���queue 


//����Scan���� 
class Scan
{
    //����һ�������ַ����ĺ��� 
    public:
        void ToStringQueue(string input);
};


//�Ժ������з�װ 
void Scan::ToStringQueue(string input)
{
    int l=input.length(); //����ַ����ĳ��� 
    string tmp="";
    for(int i=0;i<l;i++) 
    {
        if(t>10) //������ֵ�λ������10 �Ͳ������� 
        {
            cout<<"Error"<<endl;
            break;
        }
        if(input[i]=='-' || input[i]=='+' || input[i]=='(' || input[i]==')' || input[i]=='/' || input[i]=='*') //�ж��Ƿ����ַ� 
        {
            t=0; 
            if(tmp!="")
            {
               key.push(tmp);//�����е����ݴ������ 
		    }
		    tmp=""; //�ÿ� 
            tmp+=input[i];
            key.push(tmp);//��һ��һ����ͬ�����ֵ������������� 
            tmp="";//�ٴ��ÿ� 
        }
        else if(input[i]>=0||input[i]<=9)  //�ж������� 
        {
            t++;//�����������ֵĸ��� 
            tmp+=input[i];//���������ִ���һ�� 
            continue;
        }
    } 
    key.push(tmp);// �������������ִ������ 
    tmp="";
}


//����һ��Print���� 
class Print
{
	//�����ж���һ��������еĺ��� 
    public:
        void PrintStringQueue();
};

//��Print������з�װ 
void Print::PrintStringQueue()
{
    if(t<=10)
    {
        while(!key.empty()) //�ж�key�����Ƿ�Ϊ�� 
        {
            cout<<key.front()<<endl; //һ��һ������� 
            key.pop();//ɾ�������Ǹ�����Ϊqueue������front in front out�� 
        }
    }
}

