#include <iostream>
using namespace std;
int main() {
    int a,b;
    bool satis=false;
    cin>>a>>b;
    
    for(int j=a; j<=b; j++){
        if(1920%j==0){
            if(2880%j==0){
                satis=true;
                break;
            }
        }
    }
    if(satis==true){
        cout<<1;
    }
    else{
        cout<<0;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}