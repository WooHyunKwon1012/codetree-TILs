#include <iostream>
using namespace std;
#include <string>
int main() {
    string a,b;
    getline(cin,a);
    getline(cin,b);
    
    int n1, n2;
    n1=a.length();
    n2=b.length();
    for(int i=0; i<n1; i++){
        if(a[i]==' '){
            
        }
        else{
            cout<<a[i];
        }
        
    }
    for(int i=0; i<n2; i++){
        if(b[i]==' '){
            
        }
        else{
            cout<<b[i];
        }
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}