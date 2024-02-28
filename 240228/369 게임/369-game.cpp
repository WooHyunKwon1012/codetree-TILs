#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    for (int i=1; i<=n; i++){
        int A= i/10;
        int B= i-A;
        if (i%3==0){
            cout<< 0<<" ";
        }
        else if(i>=10){
            if(i%10!=0){
                cout << ((A%3==0 || B%3==0) ? 0:i)<<" ";
            }
            else{
                cout<< i<<" ";
            }
        }
        else{
            cout << i<<" ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}