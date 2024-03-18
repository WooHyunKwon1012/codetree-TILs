#include <iostream>
#include <string>
using namespace std;
int main() {
    string a[5]={"apple", "banana", "grape", "blueberry", "orange"};
    char b;
    int cnt=0;
    cin>> b;
    for(int j=0; j<5; j++){
        for(int i=2; i<4;i++){
            if(a[j][i]==b){
                cnt++;
                cout<<a[j]<<endl;
                continue;
            }
        }
    }
    cout<<cnt;

    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}