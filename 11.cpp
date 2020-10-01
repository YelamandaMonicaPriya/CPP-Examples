//sizeof() operator
#include<iostream>
using namespace std;
class Base
{
	int a;
	int b;
	char c;
};
void fun(int arr[])
{
	cout<<"using function displaying size of array passed to function"<<sizeof(arr)<<"\n";
}
int main()
{
    Base b;	
    int *p=new int(10);
    int num1;
    double num2;
    int arr[]={10,20,30,40,50};
	cout<<"sizeof(int)"<<sizeof(int)<<"\n";
	cout<<"sizeof(char)"<<sizeof(char)<<"\n";
	cout<<"sizeof(float)"<<sizeof(float)<<"\n";
	cout<<"sizeof(double)"<<sizeof(double)<<"\n";
	cout<<"sizeof(b), b is an object of class Base"<<sizeof(b)<<"\n";
	cout<<"sizeof(arr)"<<sizeof(arr)<<"\n";
	fun(arr);
	cout<<"sizeof(p)"<<sizeof(p)<<"\n";
	cout<<"sizeof(*p)"<<sizeof(*p)<<"\n";
	cout<<"sizeof(num1+num2)"<<sizeof(num1+num2)<<"\n";
	return 0;	
}
/*
sizeof(int)4
sizeof(char)1
sizeof(float)4
sizeof(double)8
sizeof(b), b is an object of class Base12
sizeof(arr)20
using function displaying size of array passed to function8
sizeof(p)8
sizeof(*p)4
sizeof(num1+num2)8
*/
