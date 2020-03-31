#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int* inputArray(int n){
	
	srand(time(NULL));
	int *ar = new int[n];
	for(int i=0;i<n;i++)
		ar[i] = rand()%(20*n) + 1;
	
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
//Heap
int findMaxIndex(int ar[], int n, int i){
	
	int leftChild, rightChild, maxIndex = i;
	
	leftChild = 2*i + 1;
	rightChild = 2*i + 2;
	
	if(leftChild < n && rightChild < n)
		maxIndex = ar[leftChild] > ar[rightChild] ?  leftChild : rightChild;
	else if(leftChild < n)
		maxIndex = leftChild;
	else if(rightChild < n)
		maxIndex = rightChild;
	
	if(ar[maxIndex] < ar[i])
		maxIndex = i;
	
	return maxIndex;
}

void heapify(int ar[], int n, int i){
	
	if(i >= n)
		return;
	
	int maxIndex = findMaxIndex(ar, n, i);
	
	if( maxIndex != i )
	{
		swap(ar[maxIndex], ar[i]);
		heapify(ar, n, maxIndex);	
	}	
}

void createHeap(int ar[],int n){
	
	for(int i= n/2 ; i>=0; i--){	
		heapify(ar, n, i);
	}	
}

void deleteElement(int ar[], int n){
	
	swap(ar[0], ar[n-1]);
	heapify(ar, n-1, 0);
//	cout<<"\nArray after deleteEl: ";
//	displayArray(ar, 0, n);

}

void heapSort(int ar[], int n){
	
	createHeap(ar, n);	
//	cout<<"\nArray after createHeap: ";
//	displayArray(ar, 0, n);

	for(int i=0; i<n; i++)
		deleteElement(ar, n-i);
	
}

//main
int main()
{
	int n;
	
	cout<<"Enter n: ";
	cin>>n;
	
	int *ar = inputArray(n);
	
	cout<<"\nArray Before Heap Sort:\n ";
	displayArray(ar, 0, n);

	heapSort(ar, n);
	
	cout<<"\nArray After Heap Sort:\n ";
	displayArray(ar, 0, n);	
	
	return 0; 
}
