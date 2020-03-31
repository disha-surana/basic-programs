#include<iostream>
#include<math.h>
using namespace std;

void bubbleSort(int ar[], int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1])
				swap(ar[j],ar[j+1]);
		}
	}
}

void displayArray(int ar[], int n){
	
	for(int i=0;i<n;i++)
		cout<<ar[i]<<" ";
}

int* inputArray(int n){
	
	int *ar = new int[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	
	return ar;
}

int main()
{
	int n;
	
	cout<<"Enter n: ";
	cin>>n;
	
	int *ar = inputArray(n);
	
	cout<<"\nArray Before Bubble Sort: ";
	displayArray(ar,n);

	bubbleSort(ar, n);
	
	cout<<"\nArray After Bubble Sort: ";
	displayArray(ar,n);	
	
	return 0; 
}
