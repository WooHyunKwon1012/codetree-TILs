#include <iostream>
using namespace std;
int main() {
    int a,b,cnt=0,sum=0;
    cin>>a>>b;
    for (int i=a; i<=b; i++){
        if(i%5==0 || i%7==0){
            cnt++;
            sum=sum+i;
        }
    }
    
    int A=sum%cnt*10/cnt;
    int B=A%cnt*10/cnt;
    if (B>=5){
        A=A+1;
    }
    cout<<sum<<" "<<sum/cnt<<"."<<sum%cnt*10/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}