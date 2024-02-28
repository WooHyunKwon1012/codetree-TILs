#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    for(int i=1; i<=a; i++){
        if(i%2==0 && i%4!=0){
            continue;
        }
        else if(i/8 == 2 || i/8 ==4 || i/8 ==6 || i/8 ==8 || i/8 ==0){
            continue;
        }
        else if(i%7<4){
            
            continue;
        }
        else{
            cout << i<<" ";
        }
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}