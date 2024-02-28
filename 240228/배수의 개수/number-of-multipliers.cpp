#include <iostream>
using namespace std;
int main() {
    int cnt_3=0,cnt_5=0;
    for (int i=1; i<=10; i++){
        int n;
        cin>>n;
        if(n%3==0){
            cnt_3++;
        }
        if(n%5==0){
            cnt_5++;
        }
    }
    cout<<cnt_3<<" "<<cnt_5;
    // 여기에 코드를 작성해주세요.
    return 0;
}