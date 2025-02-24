#include<iostream>
using namespace std;
int main(){
	int size;
	cout << "Enter Size Of Array : ";
	cin >> size;
	int arr[size];
	
	for(int i=0;i<size;i++){
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=0;i<size;i++){
	 	cout << arr[i] << endl;
	 }
	 
	
	return 0;
}