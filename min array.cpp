#include<iostream>
using namespace std;
int main()
{
	int a[5],i,min;
	for(int i=0;i<5;i++){
		cout<<"enter five integer ";
		cin>>a[i];
	}
	min=a[0];
	for(int i=0;i<5;i++){
		if(min>a[i]){
			min=a[i];
		}
	}cout<<"minimun num is "<<min;
	
}
