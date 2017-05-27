#include <iostream>
using namespace std;

int compute()
{
	int val = 1111;
	cout<<"computed: "<<val<<endl;
	return val;
}

int main(int argc, char const *argv[])
{
	int key = compute();
	if(1234 != key)
	{
		cout<<"ERROR: wrong key"<<endl;
		return 1;
	}
	cout<<"Achievement unlocked"<<endl;
	return 0;
}