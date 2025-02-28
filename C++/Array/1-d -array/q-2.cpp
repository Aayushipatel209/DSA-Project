#include<iostream>
using namespace std;
int main(){
	int size;
	cout << "Enter Size Of Array : ";
	cin >> size;
	int arr[size];
	
	for(int i=0;i<size;i++){
	 	cout << "Enter the Array[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=0;i<size;i++){
	 	if(arr[i]%2==0){
	 		cout << "Even Number: " << arr[i] << "  ";
	 		cout << endl;
		 }
	 }
	 
	
	return 0;
}