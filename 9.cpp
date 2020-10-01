//call by reference
#include<iostream>
void swap(int *a,int *b);
using namespace std;
int main()
{
int a=5,b=10;
swap(&a,&b);
cout<<"the values of a and b after swapping are\n";
cout<<a<<"\t"<<b;
return 0;	
}
void swap(int *a,int *b)
{
	int swap;
	swap=*a;
	*a=*b;
	*b=swap;
}

/*
the values of a and b after swapping are
10      5
*/
