#include<iostream>
using namespace std;
void max(int a, int b)
{int max;
	max=a;
	if(b>max)
	{
	max=b;
	cout<<"max num is ="<<b;}
	else
	cout<<"max num is ="<<a;
}
int main()
{
	int a,b;
	cout<<"enter two number ";
	cin>>a>>b;
	max(a,b);
}
