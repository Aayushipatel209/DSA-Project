#include<iostream>
using namespace std;

//number series : 2, 1, (1/2), (1/4), ... 


int main()
{
	  int n;
	  cout << "Enter the value of n: ";
	  cin >> n;
	
	int first=2,second=1,start=2;
	int i=1;
	cout << first << " "<< second << " ";
	
	for(i;i<=n;i++){
		
		cout << "1/" << start << " " ;
		start*=2;
}
	return 0;
}