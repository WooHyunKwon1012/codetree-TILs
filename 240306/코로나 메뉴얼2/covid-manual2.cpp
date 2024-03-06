#include <iostream>
using namespace std;
int main() {
    char p;
    int t, A_cnt=0,B_cnt=0, C_cnt=0, D_cnt=0;
    
    for(int i=1; i<4; i++){
        cin>>p>>t;
        if(p=='Y' && t>=37){
            A_cnt++;
        }
        else if(p=='N' && t>=37){
            B_cnt++;
        }
        else if(p=='Y' && t<37){
            C_cnt++;
        }
        else{
            D_cnt++;
        }
    }
    
    cout<<A_cnt<<" "<<B_cnt<<" "<<C_cnt<<" "<<D_cnt<<" ";
    if(A_cnt>=2){
        cout<<'E';
    }
    return 0;
}