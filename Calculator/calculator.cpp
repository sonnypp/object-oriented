#include<iostream>
#include<string>
#include "calculator.h"
using namespace std;


int main()
{
    Scan a; //创建一个Scan类的对象 a； 
    Print b; //创建一个Print类的对象 b； 
    string input; //声明字符串 ； 
    cin >> input; // 输入字符串 ； 
    a.ToStringQueue(input);  //处理字符串； 
    b.PrintStringQueue(); //输出队列； 
    return 0;
}
