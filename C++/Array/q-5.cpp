#include<iostream>
using namespace std;
int main(){
	
	int size;
	cout << "Enter Size Of Array : ";
	cin >> size;
	
	int arr[size];
	int max = arr[0];
	for(int i=0;i<size;i++){
		cout << "Enter Value of arr[" << i << "]: ";
		cin >> arr[i];
	}
	cout << endl;
	for(int i=0;i<size;i++){
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout << "Maximum Value is : " << max;
	return 0;
}