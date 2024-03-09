#include <iostream>
using namespace std;
int main() {
    int n, arr[100],max2,max,cnt=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    max2=arr[0];
    max=arr[0];
    for(int i=1; i<n; i++){
        
        if(arr[i]>=max){
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>=max2){
            max2=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==max){
            cnt++;
        }
    }
    if(cnt>=2){
        cout<< max<<" "<<max;
    }
    else{
        cout<< max<<" "<<max2;
    }
    
    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}