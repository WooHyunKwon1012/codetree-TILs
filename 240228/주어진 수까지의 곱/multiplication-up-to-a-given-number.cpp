#include <iostream>
using namespace std;
int main() {
    int a,b,sum=1;
    cin>>a>>b;
    for(int i=a; i<=b;i++){
        sum=sum*i;
    }
    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}