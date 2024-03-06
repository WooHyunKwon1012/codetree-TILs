#include <iostream>
using namespace std;
int main() {
    int arr[100],cnt=0,score[11]={};
    for(int i=0; i<100; i++){
        cin>>arr[i];
        if(arr[i]==0){
            break;
        }
        else{
            cnt++;
        }
    }
    for(int i=0; i<cnt; i++){
        score[arr[i]/10]++;
    }
    for(int i=10;i>=1; i--){
        cout<<i*10<<" - "<<score[i]<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}