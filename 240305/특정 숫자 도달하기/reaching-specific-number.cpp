#include <iostream>
using namespace std;
int main() {
    int arr[10],sum=0,cnt=0;
    double avg;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(arr[i]>=250){
            avg=(double)sum/cnt;
            cout<<fixed;
            cout.precision(1);
            cout<<sum<<" "<<avg;
            break;
        }
        sum=sum+arr[i];
        cnt++;
    }
    if(cnt==10){
        avg=(double)sum/cnt;
        cout<<fixed;
        cout.precision(1);
        cout<<sum<<" "<<avg;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}