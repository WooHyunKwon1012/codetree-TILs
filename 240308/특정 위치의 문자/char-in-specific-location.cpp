#include <iostream>
using namespace std;
int main() {
    int arr[6]={'L','E','B','R','O','S'},real=0;
    char n;
    cin>>n;
    for(int i=0; i<6; i++){
        if(arr[i]==n){
            cout<<i;
            real=1;
            break;
        }
        else{
            real=0;
            
        }
    }
    if(real==0){
        cout<<"None";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}