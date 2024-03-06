#include <iostream>
using namespace std;
int main() {
    int A1,A2,arr[10];
    cin>>A1>>A2;
    arr[0]=A1;
    arr[1]=A2;

    for(int i=0; i<10; i++){
        arr[i+2]=arr[i+1]+2*arr[i];
    }

    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}