#include <iostream>
using namespace std;

int main() {
    int mx=0, n,k1=0,k2=0,flag=0, flagmx=0;
    cin>>n;
    int *m = new int[n];
    for (int i=0; i<n; i++){
        cin>>m[i];
        if (m[i]>mx || flagmx==0){
            mx=m[i];
            flagmx=1;
        }
        if (m[i]==0 && flag ==0){
            flag=1;
            k1=i;
        }
    }
    flag=0;
    for (int i=n-1; i>0; i--){
        if (m[i]==0 && flag ==0){
            flag=1;
            k2=i;
        }
        }
    
    for (int i=k1+1; i<k2; i++){
        m[i]=mx;;
        }
    
    for (int i=0; i<n; i++){
        cout<<m[i]<<" ";
    }
    delete [] m;
    return 0;
}
