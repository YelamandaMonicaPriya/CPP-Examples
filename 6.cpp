//pointers
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p;
	p=&a;
	cout<<"value of a: "<<a<<"\n";
	cout<<"address of a: "<<&a<<"\n";
	cout<<"address of a using pointer: "<<p<<"\n";
	cout<<"value of a using pointer: "<<*p<<"\n";
	cout<<"value of pointer is the address of a: "<<p<<"\n";
	cout<<"address of pointer: "<<&p;
	return 0;
}

/*
value of a: 10
address of a: 0x6ffe0c
address of a using pointer: 0x6ffe0c
value of a using pointer: 10
value of pointer is the address of a: 0x6ffe0c
address of pointer: 0x6ffe00
*/

