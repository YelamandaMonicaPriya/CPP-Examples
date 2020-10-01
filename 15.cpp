//void pointer can store the address of variable of any data type
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	float b=10.3;
	void *p1;
	int *p2;
	p1=&a;
	//cout<<"the value of *p1: "<<*p1<<"\n";
	//The above code is wrong because it is trying to dereference a pointer to a void. That's not allowed.
	cout<<"p1="<<p1<<"\n";
	p2=(int*)p1;//in c language there is no need of typecasting the pointer
	//we can dereference p2(int pointer)
	cout<<"*p2="<<*p2<<"\n";
	return 0;
}

/*
p1=0x6ffdf4
*p2=10
*/
