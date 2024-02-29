#include <iostream>
using namespace std;
int main() {
    int n,cnt=0;
    while(1){
        cin>>n;
        if(n%2==1){
           
        }
        else{
            n=n/2;
            cnt++;
            cout<<n<<endl;
        }
        if(cnt==3){
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}