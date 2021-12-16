#include <iostream>
#include <iomanip>
using namespace std;
int** vvod(int n,int k) {
    int** m = new int* [n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[k];
        for (int j = 0; j < k; j++) {
            cin >> m[i][j];
        }
    }
    return m;
}

void vivod(int** m, int n, int k) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    int** m = vvod(n, k);
    int i1=1;
    if (k%2==0){
        i1++;
    }
    int j1 =k/2;
    for (int t=0; t<i1; t++){
        
    int e=m[0][j1];
    
    for (int i=0; i<n-1; i++)
    {
        m[i][j1]=m[i+1][j1];
    }
    m[n-1][j1]=e;
        j1--;
        
    }
   
    vivod(m, n, k);
    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;

}
