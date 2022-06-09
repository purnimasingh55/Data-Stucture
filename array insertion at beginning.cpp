#include<iostream>
using namespace std;
int main()
{
	int i,j,n,l;
	cout<<"enter the number of array element you want to enter: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements: ";
	for(i = 0; i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element you want to insert: ";
	cin>>l;
	for(j = n+1;j>=0;j--){
		arr[j+1] = arr[j];
	}
	arr[0]=l;
	cout<<"Array after insertion: ";
	for(i = 0; i<=n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
