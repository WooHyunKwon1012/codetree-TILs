#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;
    for(int i=1; i<=m; i++){
        int n,cnt=0;
        cin>>n;
        while(n!=1){
            if(n%2==1){
                n=n*3+1;
                
            }
            else{
                n=n/2;
                
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}