#include<iostream>
using namespace std;

int main(){

	int i,n,temp,j;
	long ar[1000];

	cin>>n;

	for(i=0;i<n;i++)
		cin>>ar[i];

	for(i=1;i<n;i++){

		temp=ar[i];

		for(j=i-1;j>=0 && ar[j]>temp; j--)
			ar[j+1]=ar[j];

		ar[j+1]=temp;

		for(int k=0;k<n;k++)
			cout<<ar[k]<<" ";
		cout<<endl;
	}
	
	return 0;
}