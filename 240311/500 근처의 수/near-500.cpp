#include <iostream>
using namespace std;
int main() {
    int arr[10];
    for(int i=0; i<10; i++){
        cin>> arr[i];
    }
    int max=0;
    int min=1000;
    for(int i=0; i<10; i++){
        if(arr[i]<500){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        if(arr[i]>500){
            if(arr[i]<min){
                min=arr[i];
            }
        }
    }
    cout<<max<<" "<<min;
    // 여기에 코드를 작성해주세요.
    return 0;
}