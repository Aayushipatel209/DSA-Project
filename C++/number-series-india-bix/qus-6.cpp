#include<iostream>
using namespace std;

//number series:21, 9, 21, 11, 21, 13, 21, ... 
int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	int first=21;
	int second=9;
	
	for(int i=1;i<=n;i++)
	{
		cout << first <<" " <<second << " ";
		second+=2;
	}
	
	return 0;
}