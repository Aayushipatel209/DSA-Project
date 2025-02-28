#include<iostream>
using namespace std;


void factorialofNumber(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f*=i;
	}
		cout<< "factorial of 1 to "<<n<<" number = "<< f;
}
int main()
{
	factorialofNumber(5);
	
	return 0;
}