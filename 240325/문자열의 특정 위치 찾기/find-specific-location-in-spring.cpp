#include <iostream>
#include<string>
using namespace std;
int main() {
    string str;
    cin>>str;
    char a;
    cin>>a;
    int start_index;
    if( str.find(a)!=string::npos){
        start_index=str.find(a);
        cout<<start_index;
    }
    else{
        cout<<"No";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}