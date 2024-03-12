#include <iostream>
using namespace std;
int main() {
    int m, n, arr1[10][10],arr2[10][10];
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr1[i][j]==arr2[i][j]){
                cout<<0<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}