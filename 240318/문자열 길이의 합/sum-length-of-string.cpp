#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    string str[100];
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    int cnt=0,sum=0;
    for(int i=0; i<n; i++){
        int n1;
        if(str[i][0]=='a'){
            cnt++;
        }
        n1=str[i].length();
        sum+=n1;
    }
    cout<<sum<<" "<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}