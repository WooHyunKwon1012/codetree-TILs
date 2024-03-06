#include <iostream>
using namespace std;
int main() {
    int a,b, cnt[10]={},c,d,sum=0;
    cin>>a>>b;
    for(int i; i<100; i++){
        c=a/b;
        d=a%b;
        cnt[d]++;
        a=c;
        if(a==0){
            break;
        }
    }
    // for(int i=0;i<b;i++){
    //     cout<<cnt[i]<<" ";
    // }
    for(int i=0;i<b;i++){
        sum=sum+cnt[i]*cnt[i];
    }
    cout<<sum;

    // 여기에 코드를 작성해주세요.
    return 0;
}