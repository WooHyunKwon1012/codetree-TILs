#include <iostream>
#include<string>
using namespace std;
int main() {
    string str, str_in;
    cin>>str>>str_in;
    if(str.find(str_in)!=string::npos){
        cout<<str.find(str_in);
    }
    else{
        cout<<"-1";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}