#include <iostream>
using namespace std;
int main() {
    int n,sum=0,cnt=0;
    double avg;
    while(1){
        cin>>n;
        if(n/10!=2){
            cout<< fixed;
            cout.precision(2);
            cout<<avg<<endl;
            break;
        }
        sum=sum+n;
        cnt++;
        avg=(double)sum/cnt;
        
    }
    //에 코드를 작성해주세요.
    return 0;
}