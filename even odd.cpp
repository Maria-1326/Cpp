#include<iostream>
using namespace std;
int main()
{int i,sum=0;
  for(int a=1; a<=10;a++)
  {
  	cout<<"enter a number";
  	cin>>i;
  	
	  if(i%2==0){
	  
  	cout<<"even number"<<"\n";
  	sum=sum+i;
  }else
  {
	  cout<<"odd number"<<"\n";}}
  //sum=sum+i;

cout<<"sum of even nember "<<sum;
}
