#include <iostream>
using namespace std;
int main() {
    int a,b,sum=0,temp;
    
    cin>>a>>b;
    if(a>=b){
        temp=a;
        a=b;
        b=temp;
    }
    for (int i =a; i<=b; i++){
        if(i%5==0){
            sum=sum+i;
        }
    }
    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}