//passing arrays to functions
#include<iostream>
using namespace std;
void printelements(int arr[5]); 
int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	printelements(arr1);
	printelements(arr2);
	return 0;
}
void printelements(int arr[5])
{
	cout<<"array elements are\n";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\n";
	}
}

/*
array elements are
1
2
3
4
5
array elements are
6
7
8
9
10*/
