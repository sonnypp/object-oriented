#include "stdafx.h"
#include "Scan.h"


Scan::Scan()
{
}


Scan::~Scan()
{
}
void Scan::Filelong(string text_file, string result_file)
{
	ifstream iosin;      //�����������룩���ļ���
	ofstream iosout;    //д��������������ļ���
						//���ļ�
	iosin.open(text_file.c_str(), ios::in);
	iosout.open(result_file.c_str(), ios::out);

	while (!iosin.eof())
	{
		string get_input;
		getline(iosin, get_input, '\n'); //�Ի��з���Ϊ�ֽ�㡣
		que = ToStringQueue(get_input);
		double result = 0;
		if (judge())
		{
			result = KBC.Calculation(que);
			//cout << get_input;
			//cout << result << endl;
			//�����������ֵ��¼���ļ���ȥ��
			iosout << result << endl;
		}
		else
		{
			iosout << "ERROR" << endl;   //���ݳ��ִ����ʱ�����Ǿʹ���"ERROR"���ļ�;
		}
	}
	//�ر��ļ�
	iosin.close();
	iosout.close();
}


bool Scan::judge()
{
	return flag;
}

queue<string>Scan::ToStringQueue(string input)
{
	int count = 0;      /*������һ�������м�λ��*/
	flag = true;
	while (!key.empty())
	{
		key.pop();
	}
	int len = input.length();    /*����ַ����ĳ���*/
	string tmp = "";
	/*===============================================================
	��������ַ��������֮ǰ���������ж���'('����һ���ǲ���'-'�����
	�ǵĻ���������֮�����һ��'0'���������ͶԴ������ַ���������Ӵ�
	��
	==============================================================*/
	for (int i = 0; i<len; i++)
	{
		if (input[i] == '('&&input[i + 1] == '-')
		{
			tmp += input[i];
			tmp += '0';
		}
		else if (input[i] == '-'&&input[i + 1] == '-')
		{
			tmp += '+';
			i++;
		}
		else if (input[i] == '-'&&input[i + 1] == '+')
		{
			tmp += input[i];
			i++;
		}
		else if (input[i] == '+'&&input[i + 1] == '-')
		{
			tmp += input[i];
			tmp += '0';
		}
		else if (input[i] == '+'&&input[i + 1] == '+')
		{
			tmp += input[i];
			i++;
		}
		else if (input[i] == ')'&&input[i + 1] == '(')
		{
			tmp += input[i];
			tmp += '*';
		}
		else if (input[i] >= '0'&&input[i] <= '9'&&input[i + 1] == '(')
		{
			tmp += input[i];
			tmp += '*';
		}
		else if (isdigit(input[i]) && input[i + 1] == '(')
		{
			tmp += input[i];
			tmp += '*';
		}
		else if (input[i] == ')'&&isdigit(input[i + 1]))
		{
			tmp += input[i];
			tmp += '*';
		}
		else
		{
			tmp += input[i];
		}
	}
	/*====================================
	���µ��ַ�������Ӵ���
	====================================*/
	int l = tmp.length();
	input = "";
	input = tmp;
	tmp = "";
	for (int i = 0; i<l - 1; i++)
	{
		/*������ֵ�λ������10 �Ͳ�������*/
		if (count>10)
		{
			flag = false;
			break;
		}
		/*�ж��Ƿ����ַ�*/
		if (input[i] == '-' || input[i] == '+' || input[i] == '(' || input[i] == ')' || input[i] == '/' || input[i] == '*')
		{
			count = 0;
			/*�����е����ݴ������*/
			if (tmp != "")
			{
				key.push(tmp);
			}
			/*�ÿ�*/
			tmp = "";
			tmp += input[i];
			/*��һ��һ����ͬ�����ֵ�������������*/
			key.push(tmp);
			tmp = "";       /*�ٴ��ÿ�*/
		}
		else if (input[i] >= 0 || input[i] <= 9)     /*�ж�������*/
		{
			count++;          /*�����������ֵĸ���*/
			if (input[i] == '0'&&input[i - 1] == '/' && (input[i + 1]<0 || input[i + 1]>9))
			{
				flag = false;
				break;
			}
			tmp += input[i];        /*���������ִ���һ��*/
			continue;
		}
	}
	if (tmp != "")
	{
		key.push(tmp);          /*�������������ִ������*/
		tmp = "";
	}
	return key;
}
