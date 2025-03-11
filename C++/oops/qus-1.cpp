#include<iostream>
using namespace std;

class Sport 
{
	private: 
	string name;
	int age;
	string gameName;
	
	public:
	void input(string name,int age,string gameName)
	{
		this->name = name;
		this->age = age;
		this->gameName = gameName;
	}
	void output()
	{
		cout << name << endl;
		cout << age << endl;
		cout << gameName << endl << endl;
	}
		
};


int main()
{
	 Sport s1,s2;
	 s1.input("virat",25,"cricket");
	 s2.input("harsh",20,"kho-kho");
	 
	 s1.output();
	 s2.output();
	
	return 0;
}