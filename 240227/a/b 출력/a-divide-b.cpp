#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b;
    c=a/b;
    cout<<c<<".";
    for(int i=1; i<=20; i++){
        int d=(a%b)*10/b;
        cout<<d;
        a=((a%b)*10)%b;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}