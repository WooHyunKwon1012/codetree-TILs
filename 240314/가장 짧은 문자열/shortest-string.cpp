#include <iostream>
#include<string>
using namespace std;
int main() {
    string a,b,c;
    cin>>a>>b>>c;
    if(a.length()>b.length() && a.length()>c.length()){
        if(b.length()>c.length()){
            cout<<a.length()-c.length();
        }
        else{
            cout<<a.length()-b.length();
        }
    }
    else if(b.length()>a.length() && b.length()>c.length()){
        if(a.length()>c.length()){
            cout<<b.length()-c.length();
        }
        else{
            cout<<b.length()-a.length();
        }
    }
    else{
        if(a.length()>b.length()){
            cout<<c.length()-b.length();
        }
        else{
            cout<<c.length()-a.length();
        }

    }

    // 여기에 코드를 작성해주세요.
    return 0;
}