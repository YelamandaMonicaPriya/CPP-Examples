//array of pointers to strings
#include<iostream>
using namespace std;
int main()
{
	cout<<"array of pointers:\n";
	char *arr2[]={"one","two","three","four","five"};
	for(int i=0;i<5;i++)
	{
	cout<<arr2[i]<<"\t";	
	}	
}
/*
array of pointers:
one     two     three   four    five
*/

