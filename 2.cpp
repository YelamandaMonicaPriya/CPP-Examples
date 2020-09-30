//goto statement in cpp
#include<iostream>
using namespace std;
int main()
{
	ineligible:
		cout<<"you are not eligible to vote\n";
		cout<<"please enter your age\n";
		int age;
		cin>>age;
		if(age<18)
		goto ineligible;
		else
		{
			cout<<"you are eligible to vote";
		}
	return 0;
}
/*
you are not eligible to vote
please enter your age
16
you are not eligible to vote
please enter your age
20
you are eligible to vote
*/
