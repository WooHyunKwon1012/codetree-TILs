#include <iostream>
using namespace std;
int main() {
    int n, arr[100],max2,max,tmp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    max=arr[0];
    max2=arr[1];
    if(max<max2){
        max=arr[1];
        max2=arr[0];
    }
    if(n==2){
        cout<<max<<" "<<max2;
    }
    else{
        for(int i=1; i<n; i++){
            if(arr[i]>=max){
                max2=max;
                max=arr[i];
            }
            if(arr[i]<max && arr[i]>=max2){
                max2=arr[i];
            }
            
            
            
        }

        cout<< max<<" "<<max2;
    }
    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}