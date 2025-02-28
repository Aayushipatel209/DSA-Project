#include<iostream>
using namespace std;

void primeNumber(int n)
{ 
   int factor=0;
   for(int i=1;i<=n;i++)
   {
   	   if(n%i==0)
   	   {
   	   	  factor++; 
	  }  
   }
   if(factor==2)
   {
      cout << n << " is a prime number";	
   }
   else
   {
   	  cout << n << " is a not prime number";
   	  
    }	
	
}


int main()
{
	primeNumber(17);
	
	return 0;
}