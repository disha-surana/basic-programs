#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int* inputArray(int n){
	
	srand(time(NULL));
	int *ar = new int[n];
	for(int i=0;i<n;i++)
		ar[i] = rand()%(10*n) + 1;
	
	return ar;
}

void displayArray(int ar[], int start, int end){
	
	for(int i=start;i<end;i++)
		cout<<ar[i]<<" ";
}

void swap(int &a, int &b){

	int temp = a;
	a = b;
	b = temp;
}

int partition(int ar[], int low, int high){
	
	int i = low-1, j, pivot = ar[high];
	
	for( j=low; j<high; j++){
		
		if(ar[j]>pivot){		
			continue;
		}
		swap(ar[i+1],ar[j]);
			i++;
	}
	
	swap(ar[i+1], ar[high]);
	return i+1;
}

void quickSort(int ar[], int low, int high){
	
//	cout<<"\nIntermediate: ";
//	displayArray(ar, low, high+1);

	if(low>=high)
		return;
	int partitionPos = partition(ar, low, high);
	quickSort(ar, low, partitionPos-1);
	quickSort(ar, partitionPos+1, high);

}


int main()
{
	int n;
	
	cout<<"Enter n: ";
	cin>>n;
	
	int *ar = inputArray(n);
	
	cout<<"\nArray Before Quick Sort: ";
	displayArray(ar, 0, n);

	quickSort(ar, 0, n-1);
	
	cout<<"\nArray After Quick Sort: ";
	displayArray(ar, 0, n);	
	
	return 0; 
}
