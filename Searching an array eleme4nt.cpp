//Searching an element in an array
#include<iostream>;
using namespace std;
int main(){
	int i,n,l,j;
	cout<<"Enter the number of array element: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the number of array elements: ";
	for(i =  0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element you want to serch: ";
	cin>>l;
	for(j = 0;j<n;j++){
		if(arr[j]==l){
			cout<<"Element "<<l<<"is found at index "<< j<<"\n";
		}
		else{
			cout<<"Entered number is not found at the given index!!";
		}
	}
	return 0;
}
