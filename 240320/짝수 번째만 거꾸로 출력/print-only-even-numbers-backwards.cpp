#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin>>str;
    int n=str.length();
    int a=n/2;
    for(int i=n-1; i>=0; i--){
        if(n%2==0){
            if(i%2==1){
                cout<<str[i];
            }
        }
        else{
            if(i%2==1){
                cout<<str[i];
            }
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}