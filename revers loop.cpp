#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	for(int i=0;i<5;i++){
		
		cout<<"enter five numbers \n";
		cin>>a[i];
	}
	cout<<"\nthe reverse number is \n";
	for(i=4;i>=0;i--){
		cout<<a[i];
	}
	
}
