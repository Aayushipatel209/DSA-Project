#include<iostream>
using namespace std;

// name series :22, 21, 23, 22, 24, 23, ... 

int main()
{
	  int n;
	  cout << "Enter the value of n: ";
	  cin >> n;
	  
	 int first=22;
	 
	 for(int i=1;i<=n;i++)
	 {
	 	
	 	cout << first << " ";
	 	if(i%2==0)
	 	{
	 		first+=2;
		 }
		 else
		 {
		 	first--;
		 }
	 }
	 
	 
	return 0;
	
}