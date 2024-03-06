#include <iostream>
using namespace std;
int main() {
    int arr[100]={},cnt=0,arr_new[10]={};
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
        arr_new[arr[i]/10]++;
    }
    for(int i=1; i<10; i++){
        cout<<i<<" - "<<arr_new[i]<<endl;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}