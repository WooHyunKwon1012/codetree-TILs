#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    bool satis=false;
    cin>>a>>b>>c;
    
    for(int i=a;i<=b;i++){
        if(i%c==0){
            satis=true;
            cout<<i;
            break;
        }
    }
    if(satis==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";  
    }    
    return 0;
}