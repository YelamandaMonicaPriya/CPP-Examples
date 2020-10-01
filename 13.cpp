//array of pointers
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int *p[5];
	for(int i=0;i<5;i++)
	{
		p[i]=&arr[i];
	}
	cout<<"the values of array displayed using array of pointers\n";
	for(int i=0;i<5;i++)
	{
		cout<<*p[i]<<"\t";
	}
	return 0;
}

/*
the values of array displayed using array of pointers
1       2       3       4       5
*/
