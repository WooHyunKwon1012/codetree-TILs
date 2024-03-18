#include <iostream>
#include <string>
using namespace std;
int main() {
    int sum=0;
    for(int i=0; i<10; i++){
        string a;
        cin>>a;
        int n=a.length();
        sum+=n;
    }
    cout<<sum;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}