#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

void insertionSort(int ar[], int n){
	
	int i,j;
	for(i=1;i<n;i++){
		int currEl = ar[i];
		for(j=i-1; j>=0 && ar[j]>currEl ; j--)
			ar[j+1] = ar[j];
		ar[j+1] = currEl;
	}
	
}

void displayArray(int ar[], int n){
	
	for(int i=0;i<n;i++)
		cout<<ar[i]<<" ";
}

int* inputArray(int n){
	
	srand(time(NULL));
	
	int *ar = new int[n];
	for(int i=0;i<n;i++)
		ar[i] = rand()%(10*n) + 1;
	
	return ar;
}

int main()
{
	int n;
	
	cout<<"Enter n: ";
	cin>>n;
	
	int *ar = inputArray(n);
	
	cout<<"\nArray Before Insertion Sort: ";
	displayArray(ar,n);

	insertionSort(ar, n);
	
	cout<<"\nArray After Insertion Sort: ";
	displayArray(ar,n);	
	
	return 0; 
}
