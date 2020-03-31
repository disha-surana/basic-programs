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

void merge(int ar[], int low, int mid, int high){
	
	int i = low, j = mid+1, k=0;
	int *mergedAr = new int[high-low+1];
	
	while(i<=mid && j<=high)
	{
		if(ar[i]<ar[j])
			mergedAr[k++]=ar[i++];
		else
			mergedAr[k++]=ar[j++];
	}
	while(i<=mid)
		mergedAr[k++]=ar[i++];

	while(j<=high)
		mergedAr[k++]=ar[j++];	
		
	for(int i=0; i<k; i++)
		ar[low+i] = mergedAr[i];
		
	delete[] mergedAr;
}

void mergeSort(int ar[], int low, int high){
	
//	cout<<"\nIntermediate: ";
//	displayArray(ar, low, high+1);

	if(low>=high)
		return;
	int mid = (low+high)/2;
	mergeSort(ar, low, mid);
	mergeSort(ar, mid+1, high);
	merge(ar, low, mid, high);
	
}


int main()
{
	int n;
	
	cout<<"Enter n: ";
	cin>>n;
	
	int *ar = inputArray(n);
	
	cout<<"\nArray Before Merge Sort: ";
	displayArray(ar, 0, n);

	mergeSort(ar, 0, n-1);
	
	cout<<"\nArray After Merge Sort: ";
	displayArray(ar, 0, n);	
	
	return 0; 
}
