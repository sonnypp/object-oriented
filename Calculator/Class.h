#include<iostream> 
#include<string> 
#include<string>
#include<queue>
using namespace std;

queue<string>key;
//����һ��Scan�� 
class Scan
{
	// �����ж���һ��ToStringQueue�ĺ��� 
	public:
		void ToStringQueue(string input);
};


// ��������ַ�����ֲ�����queue�� 
void Scan::ToStringQueue(string input)
{
	int l = input.length();   //�ַ����ĳ��� 
	for(int i = 0 ; i < l;)
	{
	    string tmp="";
        while(i<l&&input[i]>='0'&&input[i]<='9')
            tmp+=input[i++];  //�����ִ���һ�� 
        if(tmp!="")
            key.push(tmp);  //���뵽���� 
        while(i<l&&(input[i]<'0'||input[i]>'9'))
        {
        	tmp="";  //��tmp��ԭ�е�����Ū�ɿ�ֵ 
        	tmp+=input[i++];
            key.push(tmp); //���������ֵ��ַ�һ��һ�����뵽���� 
            tmp="";
        }
	}
}



//����һ�� Print�� 
class Print
{
	//����һ����ӡqueue�ĺ��� 
	public:
		void PirntStringQueue()
		{
	  
	         while(!key.empty())
	        {
		            cout<<key.front()<<endl;  //������С� 
		            key.pop();
            }
        }
};

