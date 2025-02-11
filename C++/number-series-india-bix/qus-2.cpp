#include<iostream>
using namespace std;

//number series :7, 10, 8, 11, 9, 12, ... 
int main()
{
	int first=7;
	int second=10;
	
	int n;
	
		cout <<"Enter the value of n: ";
		cin >> n;
		
	for(int i=1;i<=n;i++)
	{
		cout << first << " " << second << " ";
		first++;
		second++;
		
	}
	
	return 0;
}