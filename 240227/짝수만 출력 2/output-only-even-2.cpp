#include <iostream>
using namespace std;
int main() {
    int b,a,n;
    cin>> b>>a;
    
    while (b>=a){
        if(b%2==0){
            cout << b<<" ";
        }
        b-=1;
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}