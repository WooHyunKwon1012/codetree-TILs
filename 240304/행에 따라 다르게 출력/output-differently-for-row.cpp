#include <iostream>
using namespace std;
int main() {
    int n, cnt=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i%2==1){
                cnt++;
                cout<<cnt<<" ";
                
            }
            else{
                cnt+=2;
                cout<<cnt<<" ";
            }
        }
        cout<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}