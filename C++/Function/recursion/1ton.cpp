#include<iostream>
using namespace std;

void number(int n)
{
	cout << n << " ";
	n++;
	if(n<=10)
	{
		number(n);
	}
	
}
int main()
{
	number(1);
	
	return 0;
}