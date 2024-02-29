#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        if(n%i==0){
            cout<< "C";
            break;
        }
        else if(i==n){
            cout<<"N";
        }
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}