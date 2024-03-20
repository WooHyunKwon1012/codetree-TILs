#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    string str;
    for(int i=0; i<n; i++){
        string str1;
        cin>>str1;
        str=str+str1;
    }
    int n1=str.length();
    for(int i=0; i<n1; i=i+5){
        for(int j=i; j<i+5; j++){
            if(j<n1){
                cout<<str[j];
            }
            
        }
        cout<<endl;
    }
    

    // 여기에 코드를 작성해주세요.
    return 0;
}