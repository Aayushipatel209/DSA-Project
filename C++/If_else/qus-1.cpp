#include<iostream>
using namespace std;

int main()
{
	  
int age;
cout << "Enter age:";
cin >> age;

if(age<=0 || age>=100)
{
	cout << "pleace Enter valid age";
	
}
else if(age>=18)
{
	cout << "you are eligible for vote";
	
}
else if(age<=18)
{
	cout << "you are not eligible for vote";
	
}
	
	return 0;
}