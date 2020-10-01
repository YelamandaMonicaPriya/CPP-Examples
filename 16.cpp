/*
references. It is a variable that behaves as an alias for another variable.
It must be initialized at the time of the declaration.
It cannot be reassigned means that the reference variable cannot be modified.
C++ provides two types of references:
1.References to non-const values
2.References as aliases
*/
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &ref=a;
	cout<<"ref="<<ref;
	return 0;
}

//output: ref=10
