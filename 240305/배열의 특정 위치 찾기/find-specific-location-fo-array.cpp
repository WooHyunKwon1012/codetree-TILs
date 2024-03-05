#include <iostream>
using namespace std;
int main() {
    int arr[10],sum2=0,sum3=0,cnt=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(i%2==1){
            sum2=sum2+arr[i];
        }
        if((i+1)%3==0){
            sum3=sum3+arr[i];
            cnt++;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<< sum2<<" "<<(double)sum3/cnt;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}