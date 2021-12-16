#include <iostream>
using namespace std;

int main() {
    int n,k=0;
    double x,y;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x>>y;
        if (x==0 || y==0){
            k++;
        }
    }
    cout<<k;
    return 0;
}
