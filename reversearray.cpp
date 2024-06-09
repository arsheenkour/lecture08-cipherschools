//print 10 numbers consecutively taken from user in reverse order
#include<iostream>
using namespace std;
int main()
{
int a[10];
cout<<"Give 10 intgers as input";
for(int i=0;i<10;i++)
{
	cin>>a[i];
}
cout<<"the 10 given inputs are:"<<endl;
for(int i=9;i>=0;i--)
{
	cout<<a[i]<<" ";
}
}
