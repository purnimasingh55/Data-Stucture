#include<iostream>
using namespace std;
int main(){
	int i,k,j,l,n;
	cout<<"Enter the number of elements you want to enter: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the array elements: ";
	for(i  = 0; i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nEnter the element which you want to enter: ";
	cin>>l;
	cout<<"\nEnter the place before which you want to enter the element: ";
	cin>>k;
	for(j = n+1;j>=k;j--){
		arr[j+1] = arr[j];
	}
	arr[k-1] = l;
	cout<<"Array afte rthe insertion of element before the given index: ";
	for(i = 0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
