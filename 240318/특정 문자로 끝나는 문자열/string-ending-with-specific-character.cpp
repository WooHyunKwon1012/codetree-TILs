#include <iostream>
#include <string>
using namespace std;
int main() {
    string a[10];
    int cnt=0;
    char b;
    for(int i=0; i<10; i++){
        cin>>a[i];
    }
    cin>>b;
    for(int i=0; i<10; i++){
        int n=a[i].length();
        if(a[i][n-1]==b){
            cout<<a[i]<<endl;
            cnt++;
        }
    }
    if(cnt==0){
        cout<<"None";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}