/*
References can also be passed as a function parameter.
It does not create a copy of the argument and behaves as an alias for a parameter.
It enhances the performance as it does not create a copy of the argument.
*/
#include<iostream>
void swap(int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}
using namespace std;
int main()
{
	int a=5,b=10;
	cout<<"before swapping\n";
	cout<<"a="<<a<<"\n"<<"b="<<b<<"\n";
	swap(a,b);
	cout<<"after swapping\n";
	cout<<"a="<<a<<"\n"<<"b="<<b;
	return 0;
}
/*
before swapping
a=5
b=10
after swapping
a=10
b=5
*/
