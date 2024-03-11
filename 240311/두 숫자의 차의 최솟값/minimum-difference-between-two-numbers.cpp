#include <iostream>
using namespace std;
int main() {
    int n, arr[10]={},prize=99;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0;i--){
        for(int j=0; j<n; j++){
            if(i>j && arr[i]-arr[j]<prize){
                prize=arr[i]-arr[j];
            }
        }
    }
    cout<<prize;
    // 여기에 코드를 작성해주세요.
    return 0;
}