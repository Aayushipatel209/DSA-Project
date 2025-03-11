#include<iostream>
using namespace std;

class employee 
{
	public:
	string name;
	int age;
	float salary;
		
	
};
int main()
{
	employee e1,e2,e3;
	
	e1.name = "vini";
	e1.age = 20;
	e1.salary = 15000;
	
	e2.name = "dimple";
	e2.age = 22;
	e2.salary = 20000;
	
	e3.name = "sakshi";
	e3.age = 25;
	e3.salary = 25000;
	
	
	cout << e1.name << endl;
	cout << e1.age << endl;
	cout << e1.salary << endl <<endl;
	
	cout << e2.name << endl;
	cout << e2.age << endl;
	cout << e2.salary << endl <<endl;
	
	cout << e3.name << endl;
	cout << e3.age << endl;
	cout << e3.salary << endl <<endl;
	
	
	
	return 0;
}