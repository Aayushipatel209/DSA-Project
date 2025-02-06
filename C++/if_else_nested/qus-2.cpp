#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
	
	cout << "a is :";
	cin >> a;
	cout << "b is :";
	cin >> b;
	cout << "c is :";
	cin >> c;
	
	
	if(a>b)
	{
        //a,c
        if(a>c)
        {
            //a
            cout << "a is max";
		}
		else
		{
           //c
           cout << "c is max";
		}
	}
	else
	{
        //b,c
        if(b>c)
		{
            //b	
        	cout << "b is max";
		}
		else
		{
            //c
            cout << "c is max";
		}
	}
	
	
	
		  
	  
	  
	return 0;
}