#include<iostream>
using namespace std;
void table(int n)
{
	int i;
	for(i=1;i<=10;i++)
	cout<<n<<"*"<<i<<"="<<n*i<<"\n";
}
int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
    table(num);
}
