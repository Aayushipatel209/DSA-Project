#include <iostream>
using namespace std;

int main()
{
//swaping without third veriable and +,-	
	
	int num1 = 30;
	int num2 = 20;

   num1 = num1 * num2;
   num2 = num1 / num2;
   num1 = num1 / num2;
	
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;


       return 0;
}