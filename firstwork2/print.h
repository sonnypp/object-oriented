#include<iostream>
#define pi 3.1415926
using namespace std;


double input()
{
	double R;
	cout << "Please input the value of the radius of the circle: ";
	cin >> R ;
	return R;
}
 
void Pr(double r)
{
    cout << pi*r*r << endl;
} 
