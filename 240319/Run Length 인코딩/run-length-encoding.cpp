#include <iostream>
#include <string>
using namespace std;
int main() {
    //아스키 코드 97번 부터 112번.
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    int n=str.length();
    int cnt=1,cnt2=0;
    for(int i=0; i<n; i++){
        if(str[i+1]==str[i]){
        }
        else{
            cnt2++;
        }
    }
    cout<<2*cnt2<<endl;
    for(int i=0; i<n; i++){
        if(str[i+1]==str[i]){
            cnt++;
        }
        else{
            cout<<str[i];
            cout<<cnt;
            cnt=1;
            
        }
    }
    
    return 0;
}