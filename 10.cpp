//recursion
#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int n=5;
	int f=fact(n);
	cout<<"factorial of n is:"<<f;
	return 0;
}

//factorial of n is:120
