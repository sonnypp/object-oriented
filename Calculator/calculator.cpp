#include<iostream>
#include<string>
#include "calculator.h"
using namespace std;


int main()
{
    Scan a; //����һ��Scan��Ķ��� a�� 
    Print b; //����һ��Print��Ķ��� b�� 
    string input; //�����ַ��� �� 
    cin >> input; // �����ַ��� �� 
    a.ToStringQueue(input);  //�����ַ����� 
    b.PrintStringQueue(); //������У� 
    return 0;
}
