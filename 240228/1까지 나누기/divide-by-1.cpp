#include <iostream>
using namespace std;
int main() {
    int n,cnt=0;
    double A=1;
    
    cin>>n;
    for (int i=1; ;i++){
        
        A=n/i;
        
        cnt++;
        if(A<=1){
            cout<<cnt;
            break;
        }
        n=A;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}