//array name is a pointer which holds the address of the first element of that array
#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,20,30,40,50};
	int *p;
	p=arr;
	cout<<"the value of *arr: "<<*arr<<"\n";
	cout<<"the value of *p: "<<*p<<"\n";
	return 0;
}
/*
the value of *arr: 10
the value of *p: 10
*/
