#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

void selectionSort(int ar[], int n){
	
	int smallest;
	
	for(int i=0;i<n;i++){
		smallest = i;
		int currEl = ar[i];
		for(int j=i+1;j<n;j++){
			if(ar[j]<ar[smallest])
				smallest = j;
		}
		ar[i] = ar[smallest];
		ar[smallest] = currEl; 
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
	
	cout<<"\nArray Before Bubble Sort: ";
	displayArray(ar,n);

	selectionSort(ar, n);
	
	cout<<"\nArray After Bubble Sort: ";
	displayArray(ar,n);	
	
	return 0; 
}
