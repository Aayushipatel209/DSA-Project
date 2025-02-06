#include<iostream>
using namespace std;

int main()
{
	 int a,b,c,d;
	 
	cout << "a is :";
	cin >> a;
	
	cout << "b is :";
	cin >> b;
	
	cout << "c is :";
	cin >> c;
	
	cout << "d is :";
	cin >> d;
	
	if(a>b)
	{
        //a,c,d	
        if(a>c)
		{
            //a,d
             if(a>d)
             {
                 //a
             	cout << "a is max";	
			 }
			 else
			 {
                //d
			 	cout << "d is max";			 	
			 }
		}
		else
		{
             //c,d
             if(c>d)
             {
                //c
             	cout << "c is max";	
			 }
			 else
			 {
			 	//d
             	cout << "d is max";	
			 }
		}
	}
	else
	{
       //b,c,d
       if(b>c)
       {
       	  //b,d
       	  if(b>d)
	      {
       	  	//b
       	  	cout << "b is max";
		  }
		  else
		  {
		  	//d
       	  	cout << "d is max";
		  }
       	  
	   }
	   else
	   {
	   	   //c,d
	   	   if(c>d)
	   	   {
              //c
	   	   	   cout << "c is max";
	   	    }
	   	    else
	   	    {
               //d
			   cout << "d is max";	   	        	
			}
	   	  
	   }
	}
	 
	return 0;
}