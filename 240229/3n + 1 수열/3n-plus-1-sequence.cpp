#include <iostream>
using namespace std;
int main() {
    int n,cnt=0;
    cin>>n;
    while(1){
        if (n==1){
            cout<<cnt;
            break;
        }
        cnt++;
        if(n%2==0){
            n=n/2;
            
        }
        else{
            n=n*3+1;
            
        }
        

    }

    // 여기에 코드를 작성해주세요.
    return 0;
}