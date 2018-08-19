#include <iostream>
#include <string.h>
using namespace std;

int main() {
    
    char s[10000],even[5000],odd[5000];
    int n,m,k,l;
    
    cin>>n;
            
    for(int i=0;i<n;i++){
        
        cin>>s;
        
        l=k=0;
        m=strlen(s);
        
        for(int j=0 ; j<m; j++){    
            if(j%2==0)
                even[k++]=s[j];
            else
                odd[l++]=s[j];
        }
        odd[l]='\0';
        even[k]='\0';
        
        cout<<even<<" "<<odd<<"\n";
    }
    return 0;
}
