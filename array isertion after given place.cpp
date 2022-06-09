#include<iostream>
using namespace std;
int main(){
	int i,j,n,k,l;
	cout<<"Enter the number of elements:L ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the array elements: ";
	for(i = 0; i<n; i++){
		cin>>arr[i];
	} 
	cout<<"Enter the element you want to insert: ";
	cin>>l;
	cout<<"Enter the place after which you want to enter the element: ";
	cin>>k;
	for(j = n+1;j>=k-1;j--){
		arr[j+1]=arr[j];
	}
	arr[k-1] = l;
	cout<<"Array after the insertion of element after the given place: ";
	for(i = 0; i<n+1; i++){
		cout<<arr[i]<<" ";
	}
	return 0; 
}
