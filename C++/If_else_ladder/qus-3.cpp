#include<iostream>
using namespace std; 

int main()
{
	
	int Number;
	
	cout <<"Enter your Number:";
	cin >> Number;
	
	if(Number>0)
	{
	cout <<	"your Number is Positive";  
	}
	
	
	else if(Number<0)
	{
		cout << "your Number is Negative"; 
	}
	
	else if(Number==0)
	{
		cout << "your Number is Nautral"; 
	}
		
	else
	 {
		cout << "Enter valid Number!!";
	  }
	return 0;
	
}









