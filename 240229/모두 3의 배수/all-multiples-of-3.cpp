#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e;
    bool satis=false;
    cin>>a>>b>>c>>d>>e;
    if(a%3==0){
        if(b%3==0){
            if(c%3==0){
                if(d%3==0){
                    if(e%3==0){
                        satis=true;
                    }
                }
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