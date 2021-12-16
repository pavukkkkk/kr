

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


char* f(string s1, string s2, int &len){
    string s3="";
    
    char *m = new char[s1.length()];
    for (int i=0; i<s1.length(); i++){
        if (s2.find(s1[i])<s2.length() && s3.find(s1[i])>s2.length() ){
            m[len]=s1[i];
            s3+=s1[i];
            len++;
        }
    }
    return m;
}

void vivod(char *m, int &len) {
    
    for (int i = 0; i <= len; i++)
    {
            cout << m[i]<< "\t";
        }

}


int main() {
    string s1,s2;
    cin >>s1;
    cin>>s2;
    int len=0;
    char *m=f(s1,s2, len);
    vivod (m,len);
    return 0;
}
