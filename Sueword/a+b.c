#include<iostream>
using namespace std;

int main()
{
	int a,b,sum=0,i=0,j=0,n=0,k[12];
	cin >> a >> b;
	sum=a+b;
	if(sum==0)
	{
		cout << "0" << endl;
	}
	else
	{
		if(sum<0)
		{
			sum=-sum;
			n=1;
		}
		while(sum)
		{
			k[i]=sum%10;
			sum=sum/10;
			i++;
			j++;
		}
		if(n)
		{
			cout << "-" ;
		}
		for(i=j-1;i>=0;i--)
		{
			cout << k[i];
			if(i==3||i==6)
			{
				cout << "," ;
			}
		}
	}
	return 0;
} 