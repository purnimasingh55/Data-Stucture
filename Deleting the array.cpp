//Deleting the array element
#include<iostream>
using namespace std;
int main(){
	int n, i,j,d;
	cout<<"Enter the number of array element you want to enter: ";
	cin>>n;
	cout<<"\nEnter the array elements: ";
	int arr[n];
	for(i = 0;i<n; i++){
		cin>>arr[i];
	}
	cout<<"\nEnter the element you want to delete: ";
	cin>>d;
	for(j = 0; j<n;j++){
		if(arr[j]==d){
			arr[j]=arr[j+1];
		}
	}
	cout<<"Array after the detetion of array: ";
	for(i = 0; i<n-1;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
