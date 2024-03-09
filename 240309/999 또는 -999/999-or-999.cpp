#include <iostream>
using namespace std;
int main() {
    int arr[100],max, min,n;
    for (int i=0; i<100; i++){
        cin>>arr[i];
        if(arr[i]==999 || arr[i]==-999){
            n=i;
            break;
        }
    }
    max=arr[0];
    min=arr[0];
    for(int j=1; j<n;j++){
        if(arr[j]>=max){
            max=arr[j];
        }
        if(arr[j]<=min){
            min=arr[j];
        }
    }
    cout<<max<<" "<<min;
    // 여기에 코드를 작성해주세요.
    return 0;
}