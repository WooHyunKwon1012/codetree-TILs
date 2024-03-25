#include <iostream>
#include<string>
using namespace std;
int main() {
    string str;
    cin>>str;
    int cnt1=0, cnt2=0, n1;
    n1=str.length();
    for(int i=0; i<n1-1; i++){
        if(str[i]=='e'){
            if(str[i+1]=='e'){
                cnt1++;
            }
            if(str[i+1]=='b'){
                cnt2++;
            }
        }
    }
    cout<<cnt1<<" "<<cnt2;
    // 여기에 코드를 작성해주세요.
    return 0;
}