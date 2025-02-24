#include<iostream>
using namespace std;
int main(){
	int size,sum=0;
	cout << "Enter Size Of Array : ";
	cin >> size;
	int arr[size];
	
	for(int i=0;i<size;i++){
	 	cout << "Enter the Array[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=0;i<size;i++){
	 	sum += arr[i];
	 }
	 cout <<"sum of all numbers: " <<sum;
	
	return 0;
}