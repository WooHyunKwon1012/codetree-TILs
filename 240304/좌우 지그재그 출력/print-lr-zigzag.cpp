#include <iostream>
using namespace std;
int main() {
    int n,cnt=1;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2==1){
            for(int j=1; j<=n; j++){
                cout<< cnt<<" ";
                cnt++;
            
                
            }
        }
        else{
            for(int j=1; j<=n; j++){ //4,3,2,1  cnt 5,6,7,8
                cout<<n*(i)-j+1<<" ";
                cnt++;
            }
        }    
        cout<<endl;
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}