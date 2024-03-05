#include <iostream>
using namespace std;
int main() {
    int arr[10],sum_evn=0, sum_odd=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(i%2==0){
            sum_odd+=arr[i];
        }
        if(i%2==1){
            sum_evn+=arr[i];
        }
    }
    if(sum_evn>=sum_odd){
        cout<<sum_evn-sum_odd;
    }
    else{
        cout<<sum_odd-sum_evn;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}