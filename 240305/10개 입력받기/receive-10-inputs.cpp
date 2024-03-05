#include <iostream>
using namespace std;
int main() {
    int arr[10],cnt,sum=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(arr[i]==0){
            break;
        }
        cnt=i;
        sum=sum+arr[i];
    }
    double avg=(double)sum/(cnt+1);
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<avg;

    // 여기에 코드를 작성해주세요.
    return 0;
}