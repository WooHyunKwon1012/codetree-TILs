#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    int n;
    cin>>a>>n;
    int len=a.length();
    for(int i=len-1; i>len-1-n;i--){
        cout<<a[i];
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}