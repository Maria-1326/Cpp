#include<iostream>
using namespace std;
int main()
{
	int a[5],i,j;
	for(i=0;i<=5;i++)
	{
		cout<<"enter value";
		cin>>a[i];
	}
	cout<<"value in actual order"<<"\n";
	for(i=0;i<=5;i++)
	cout<<a[i];
	cout<<"\n"<<"value in reverse order";
	for(j=5;j>=0;j--)
	cout<<a[j];
}
