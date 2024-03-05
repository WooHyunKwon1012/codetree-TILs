#include <iostream>
using namespace std;
int main() {
    int arr[10],cnt=0,sum=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(arr[i]==0){
            break;
        }
        if(arr[i]%2==0){
            cnt++;
            sum=sum+arr[i];
        }
        
    }
    
    
    cout<<cnt<<" "<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}