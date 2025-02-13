#include<iostream>
using namespace std;

//number series:31, 29, 24, 22, 17, ...
int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	int first=31;
	for(int i=1;i<=n;i++)
	{
		cout << first << " ";
		if(i%2==0)
		{
			first-=5;
		}
		else
		{
			first-=2;
		}
	}
	return 0;
}