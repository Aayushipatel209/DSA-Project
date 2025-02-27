#include<iostream>
using namespace std;


int main()
{
	int age;
	cout << "enter the age:";
	cin >> age;
	                                                    
	if(age>=18)
	{
        //18 t0 100,100+
         if(age<=100)
		 {
            //18 to 100
		 	 cout << "you are eligible for vote"; 
	     }  
		 else
		 {
            //100+
		 	cout << "enter valid age!!"; 
		 }
	}
	else
	{
        //-ve,0,1 to 17
           if(age<=0)
           {
                //0,-ve
                 if(age==0)
                 {
                    //0
                 	 cout << "zero is not allowed as age";
                 	
				 }
				 else
				 {
                     //-ve
				 	cout << "negative value is not allowed as age";
				 }
		   }
		   else
		   {
		   	   //1 to 17
                cout << "you are not eligible for vote";
		   	 
		   }
		
	}
	
	return 0;
}