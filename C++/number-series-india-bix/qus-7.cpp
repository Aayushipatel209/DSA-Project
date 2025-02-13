#include<iostream>
using namespace std;

//number series: 58, 52, 46, 40, 34, ... 
int main()
{
	int n;
		cout << "Enter the value of n: ";
		cin >> n;
		
		int first=58;
		for(int i=0; i<=n;i++)
		{
			cout << first << " ";
			first-=6; 
		}
	return 0;
}