#include <iostream>
#include <string>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    if(a.length()>b.length()){
        cout<<a<<" "<<a.length();
    }
    else if(a.length()==b.length()){
        cout<<"same";
    }
    else{
        cout<<b<<" "<<b.length();
    }
        
    
    // 여기에 코드를 작성해주세요.

    return 0;
}