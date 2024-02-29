#include <iostream>
using namespace std;
int main() {
    int n;
    bool satis = false;
    cin>>n;
    for (int i=2;i<n;i++){
        if(n%i==0){
            satis=true;
            break;
        }   
    }

    if(satis==true){
        cout<< 'C';
    }
    else{
        cout<< 'P';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}