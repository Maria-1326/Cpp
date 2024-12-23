#include<iostream>
using namespace std;
int main()
{
	int a[5],i,sum=0,avg;
	for(int i=0;i<=5;i++){
		cout<<"enter an integer ";
		cin>>a[i];
		
	}
	for(int i=0;i<=5;i++){
		cout<<a[i]<<"\n";
		sum=sum+a[i];
		avg=sum/5*100;
	}
	cout<<"average is  "<<avg;
	
	
}
