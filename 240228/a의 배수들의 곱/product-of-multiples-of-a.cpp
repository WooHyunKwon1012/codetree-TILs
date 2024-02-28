#include <iostream>
using namespace std;
int main() {
    int a,b,sum=1;
    cin>>a>>b;
    for(int i=1; i<=b; i++){
        if (i%a==0){
            sum=sum*i;
        }
    }
    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}