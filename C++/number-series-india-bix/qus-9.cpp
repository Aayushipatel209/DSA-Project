#include<iostream>
using namespace std;

//number series:8, 22, 8, 28, 8, ...
int main()
{
	
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	int first = 8;
	int second = 22;
	
	for(int i=1;i<=n;i++)
	{
		cout << first << " " << second << " ";
		second+=6;
		
	}
	
	return 0;
}