#include <iostream>
using namespace std;
#include <string>
int main() {
    string str;
    char a;
    getline(cin, str);
    cin>>a;
    int n,cnt=0;
    n=str.length();
    for(int i=0; i<n; i++){
        if(str[i]==a){
            cnt++;
        }
    }
    cout<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}