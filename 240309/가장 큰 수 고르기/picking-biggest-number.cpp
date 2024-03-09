#include <iostream>
using namespace std;
int main() {
    int max,arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
        
    }
    for(int i=0; i<9; i++){
        if(arr[i]<=arr[i+1]){
            max=arr[i+1];
        }
    }
    cout<<max;
    // 여기에 코드를 작성해주세요.
    return 0;
}