//array insertion
#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"Enter the number of array elements: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the array: ";
	for(i = 0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nArray before insertion: ";
	for(i =0; i<n;i++){
		cout<<arr[i]<<" ";
	}
	int k,j;
	cout<<"\nEnter the number you want to insert: ";
	cin>>k;
	cout<<"\n Enter the place at which you want to insert the element: ";
	cin>>j;
	for(int l = n+1; l>=j; l--){
		arr[l+1] = arr[l];
	}
	arr[j] = k;
	cout<<"\nArray after the insertion: ";
	for(i = 0;i<n+1;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
