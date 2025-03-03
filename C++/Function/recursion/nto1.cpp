#include<iostream>
using namespace std;

void number(int n)
{
	cout << n << " ";
	n--;
	if(n>=1)
	{
		number(n);
	}
	
}
int main()
{
	number(10);
	
	return 0;
}