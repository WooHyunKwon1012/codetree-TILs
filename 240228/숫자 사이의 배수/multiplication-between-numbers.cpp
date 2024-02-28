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
    int B=sum%cnt*10%cnt%cnt*10/cnt;
    int C=sum/cnt;
    if (B>=5){
        A=A+1;
        if (A==10){
            C=C+1;
        }
    }
    cout<<sum<<" "<<C<<"."<<A;
    // 여기에 코드를 작성해주세요.
    return 0;
}