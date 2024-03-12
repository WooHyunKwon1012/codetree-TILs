#include <iostream>
using namespace std;
int main() {
    int n,cnt=1,arr[10][10];
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=cnt;
           
            cnt++;
        }
    }
    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}