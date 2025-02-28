#include<iostream>
using namespace std;


void sumofNumber(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<< "sum of 1 to "<<n<<" number = "<< sum;
	
}
int main()
{
	sumofNumber(5);
	
	return 0;
}