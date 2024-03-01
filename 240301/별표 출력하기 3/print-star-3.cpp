#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=n; i>=1; i--){
        
        for(int k=n-i; k>=1;k--){
            cout<<" "<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}