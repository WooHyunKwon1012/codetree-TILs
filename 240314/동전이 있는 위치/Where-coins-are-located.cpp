#include <iostream>
using namespace std;
int main() {
    int n,m,arr[10][10]={};
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int  r,c;
        cin>>r;
        cin>>c;
        arr[r-1][c-1]=1;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}