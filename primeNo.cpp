#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,flag=0;
    cout<<"Enter number 'n' : ";
    cin>>n;
    
    if(n==1){
       cout<<"\n 1 is neither prime nor composite.";
        return 0;
    }
       
    for(int i=2; i <= sqrt(n); i++){
        
        if(n%i==0)
        {   
            flag=1;
            break;
        }
        
    }
    
    if(flag==0)
        cout<<"\n"<<n<<" is a prime.";
    else
         cout<<"\n"<<n<<" is not a prime.";

    return 0;
}
