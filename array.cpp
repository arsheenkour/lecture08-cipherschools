#include<iostream>
using namespace std;
int main()
{
	//int x;

//arrays can be used to store multiple values in a single variable
//int a[5];//array of name a that can store 6 integers as the indexing start from 0 
//the indexing start from 0-5
//first element is indexed as 0 , second as 1 and so on
int a[4];
cout<<"Give 5 intgers as input";
for(int i=0;i<5;i++)
{
	cin>>a[i];
}
cout<<"the 5 given inputs are:"<<endl;
for(int i=0;i<5;i++)
{
	cout<<a[i]<<" ";
}
}
