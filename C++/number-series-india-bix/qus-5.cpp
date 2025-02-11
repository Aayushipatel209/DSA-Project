#include<iostream>
using namespace std;

//name series:53, 53, 40, 40, 27, 27, ... 

int main()
{
	int n;
	
	cout << "Enter the value of n: ";
	cin >> n;
	
	int first=53;
	
	for(int i=1;i<=n;i++)
	{
	   	 cout << first << " " << first << " ";
	   	 first-=13;
	}
		
	return 0;
	
}