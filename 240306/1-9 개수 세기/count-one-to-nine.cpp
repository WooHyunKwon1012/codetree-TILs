#include <iostream>
using namespace std;
int main() {
    int n,arr[9]={},cnt[10]={};
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<9; i++){
        cnt[arr[i]]=cnt[arr[i]]+1;
    }
    for(int i=1; i<=9; i++){
        cout<<cnt[i]<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}