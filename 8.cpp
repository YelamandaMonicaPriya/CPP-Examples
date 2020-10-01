//call by value
#include<iostream>
void change(int a);
using namespace std;
int main()
{
	int a=5;
	change(a);
	cout<<a<<"\n";
	return 0;
}
void change(int a)
{
	a=10;
}

//output: 5
