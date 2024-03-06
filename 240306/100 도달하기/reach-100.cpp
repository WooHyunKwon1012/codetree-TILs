#include <iostream>
using namespace std;
int main() {
    int n, arr[100],cnt;
    cin>>n; 
    arr[0]=1;
    arr[1]=n;
    for(int i=0; i<100; i++){
        arr[i+2]=arr[i+1]+arr[i];
        if(arr[i+2]>100){
            cnt=i+2;
            break;
        }
    }
    for(int i=0; i<cnt+1;i++){
        cout<<arr[i]<<" ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}