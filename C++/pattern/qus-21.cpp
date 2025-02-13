#include <iostream>
using namespace std;

//A
//B C
//D E F
//G H I J
//K L M N O

int main() 
{
	 char Alfa = 'A'; 
    for (int i=1;i<=5;i++) 
	{  
        for(int j=1;j<=i;j++) 
		{  
            cout << Alfa << " ";
            Alfa++;  
        }
        cout << endl;
    }
    return 0;
}