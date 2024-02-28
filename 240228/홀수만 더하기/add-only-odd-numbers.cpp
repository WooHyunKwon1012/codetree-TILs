#include <iostream>
using namespace std;                                      
int main(){
    int n,n1,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>n1;
        if(n1%3==0 && n1%2==1){
            sum=sum+n1;
        }
    }
    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}