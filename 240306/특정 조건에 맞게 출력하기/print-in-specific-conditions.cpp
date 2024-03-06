#include <iostream>
using namespace std;
int main() {
    int arr[100];
    for(int i=0; i<100; i++){
        int n;
        cin>>n;
        if(n!=0){
            if(n%2==0){
                arr[i]=n/2;
                cout<<arr[i]<<" ";
            }
            else{
                arr[i]=n+3;
                cout<<arr[i]<<" ";
            }
        }

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}