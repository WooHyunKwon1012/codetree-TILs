#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=n-1; i>=1; i--){    
        cout<<"  ";
            
        
        for(int j=1; j<=(n-i)/2; j++){
            cout<<"    ";
            }
        
        
        
        for(int j=1; j<=(i+1)/2;j++){
        
            cout<<"*   ";
            
        }
    
        cout<<endl;
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}