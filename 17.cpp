//if we change the value of reference variable the original variable value is also changed
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &ref=a;
	cout<<"a="<<a<<"\n";
	cout<<"ref="<<ref<<"\n";
	ref=12;
	cout<<"ref="<<ref<<"\n";
	cout<<"a="<<a;
	return 0;
}

/*
a=10
ref=10
ref=12
a=12
*/
