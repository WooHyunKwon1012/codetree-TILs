#include <iostream>
using namespace std;
int main() {
    int arr[10], cnt[100]={};
    for(int i=0; i<10; i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<10; i++){
        cnt[arr[i]]=cnt[arr[i]]+1;
        
    }
   
    for(int i=1;i<=6; i++){
        cout<<i<<" - "<<cnt[i]<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}