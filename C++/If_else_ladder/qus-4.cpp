#include<iostream>
using namespace std; 

int main()
{
	float per;
	cout <<"Enter The Percentage of The Student:";
	cin >> per;
	
	if(per>100)
	{
		cout << "Enter correct Grade !!" << endl;
     }
	else if(per>=90)
	{
		cout << "student Grade: A+" << endl;
	}
	else if(per>=80)
	{
		cout << "student Grade: A"  << endl;
	}
    else if(per>=70)
	{
		cout << "student Grade: B" << endl;
	}
	else if(per>=60)
	{
		cout << "student Grade: C" << endl;
	}
	else if(per>=50 || per>=40)
	{
		cout << "student Grade: D" << endl;
	}
	
	else 
	{
		cout << "Fail in Exam" << endl;
	}
	return 0;
}