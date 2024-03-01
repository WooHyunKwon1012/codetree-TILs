#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1; k<=2*i-1;k++){
            cout<<"* ";
        }
        
        cout<<endl;    
    }
    
    for(int i=n-1; i>=1; i--){
        for(int j=i-1; j>=1;j--){
            cout<<"  ";
        }   
        for(int k=1; k<=2*(n-i)+1;k++){
            cout<<"* ";
        }
         
        cout<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}