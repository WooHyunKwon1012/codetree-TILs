#include <iostream>
using namespace std;
int main() {
    int n, sum=0,cnt=0;
    double avg;
    for(int i=1; i<=10;i++){
        cin>>n;
        if (n>=0 && n<=200){
            sum=sum+n;
            cnt++;
        }

    }
    avg= (double) sum/ cnt;
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<avg;
    // 여기에 코드를 작성해주세요.
    return 0;
}