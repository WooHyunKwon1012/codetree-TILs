#include <iostream>
using namespace std;
int main() {
    int arr[10],n;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        n=i;
        if(arr[i]==0){
            
            break;
        }
    }
    
    if(arr[n]!=0){
        for(int i=n; i>=0; i--){
        cout<<arr[i]<<" ";
        }
    }
    else{
        for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
        }
    }
    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}