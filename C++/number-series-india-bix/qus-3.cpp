#include<iostream>
using namespace std;

//number series :36, 34, 30, 28, 24, ... 

int main()
{
	  int n;
	  cout << "Enter the value of n: ";
	  cin >> n;
	  
	 int first=36;
	 
	 for(int i=1;i<=n;i++)
	 {
	 	
	 	cout << first << " ";
	 	if(i%2==0)
	 	{
	 		first-=4;
		 }
		 else
		 {
		 	first-=2;
		 }
	 }
	 
	 
	return 0;
	
}