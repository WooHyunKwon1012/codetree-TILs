#include <iostream>
using namespace std;
int main() {
    int n1, n2,arr_a[100],arr_b[100],cnt=0;
    cin>>n1>>n2;
    for(int i=0; i<n1; i++){
        cin>>arr_a[i];
    }
    for(int i=0; i<n2; i++){
        cin>>arr_b[i];
    }
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr_a[i]==arr_b[j]){
                
                for(int k=1;k<n2-j;k++){
                    if(arr_a[i+k]!=arr_b[j+k]){
                        break;
                    }
                    else{
                        
                        cnt++;
                    }
                }
                
            }
        }
    }
    
    if(cnt>0 && n1>=n2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}