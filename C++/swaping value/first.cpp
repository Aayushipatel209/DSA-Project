#include<iostream>
using namespace std;
int main()
{
	 //swaping with third veriable
	int num1=10;
	int num2=20;
	int temp=num1;
	
	
	num1=num2;
	num2=temp;
	
    cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	
	
	return 0;
}