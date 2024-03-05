#include <iostream>
using namespace std;
int main() {
    int n,arr[100],arr1[100],cnt=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> arr[i];
        if(arr[i]%2==0){
            
            arr1[cnt]=arr[i];
            cnt++;
        }
    }
    for(int i=0; i<cnt; i++){
        cout<<arr1[i]<<" ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}