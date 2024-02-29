#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int k=1; k<=n; k++){
        for(int i=1; i<=k;i++){
            cout << "*"<<" ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}