#include <iostream>
using namespace std;
int main() {
    int n,sum=0,cnt=0,num;
    double avg;
    cin>>n;
    for(int i=1; i<=n;i++){
        cin>>num;
        sum=sum+num;
        cnt++;
    }
    avg=(double)sum/cnt;
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<avg;
    // 여기에 코드를 작성해주세요.
    return 0;
}