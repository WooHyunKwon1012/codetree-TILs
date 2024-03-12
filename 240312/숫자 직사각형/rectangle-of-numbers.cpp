#include <iostream>
using namespace std;
int main() {
    int n,m,arr[100][100],cnt=1;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j]=cnt;
            cnt++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}