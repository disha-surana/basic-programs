#include<iostream>
using namespace std;

int main(){

	int n;
	long scores[1000],max,min,maxbr,minbr;
	maxbr=minbr=0;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>scores[i];
	}
	max=min=scores[0];
	for(int i=1;i<n;i++)
	{
		if(scores[i]>max){
			max=scores[i];
			maxbr++;
		}
		else if(scores[i]<min)
		{
			min=scores[i];
			minbr++;	
		}		
	}
	
	cout<<maxbr<<" "<<minbr;	

return 0;
} 