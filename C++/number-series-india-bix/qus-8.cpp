#include<iostream>
using namespace std;

//number series:3, 4, 7, 8, 11, 12, ... 
int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	int first=3;
	
	for(int i=1;i<=n;i++)
	{
		cout << first << " ";
		
		if(i%2==0)
		{
			first+=3;
		}
		else
		{
			
			first++;
		}
	}
	
	
	 return 0;
}