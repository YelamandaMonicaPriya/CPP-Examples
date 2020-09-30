//multidimensional arrays
#include<iostream>
using namespace std;
void printelements(int a[2][2]);
int main()
{
	//array declaration
	int a[2][2];
	//array initialisation
	a[0][0]=1;
	a[0][1]=2;
	a[1][0]=3;
	a[1][1]=4;
	printelements(a);
	//array declaration and intialisation at same time
	int arr[2][2]={{1,2},{3,4}};
	printelements(arr);
	return 0;
}
void printelements(int a[2][2])
{
	cout<<"array elements are\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

/*
array elements are
1       2
3       4
array elements are
1       2
3       4
*/
