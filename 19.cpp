//references as shortcuts
#include<iostream>
using namespace std;
struct profile{
	int id;
};
struct employee{
	profile p;
};
int main()
{
	employee e;
	int &ref=e.p.id;
	ref=9;
	cout<<"ref="<<ref<<"\t"<<"e.p.id="<<e.p.id;
	return 0;
}

/*
ref=9   e.p.id=9
*/
