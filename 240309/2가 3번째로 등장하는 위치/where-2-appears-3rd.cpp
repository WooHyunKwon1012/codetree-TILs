#include <iostream>
using namespace std;
int main() {
    int n,cnt=0,arr[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==2){
            cnt++;
        }
        if(cnt==3){
            cout<<i+1;
            break;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}