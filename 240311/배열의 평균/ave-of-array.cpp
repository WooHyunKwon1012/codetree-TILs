#include <iostream>
using namespace std;
int main() {
    int arr[2][4]={}, avr=0,sum=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
    }
    cout<<fixed;
    cout.precision(1);
    for(int i=0; i<2; i++){
        int H_avr=0;
        for(int j=0; j<4; j++){
            
            H_avr+=arr[i][j];

        }
        
        cout<<(double)H_avr/4<<" ";
    }
    cout<<endl;
    for(int j=0; j<4; j++){
        int V_avr=0;
        for(int i=0; i<2; i++){
            V_avr+=arr[i][j];
        }
        
        cout<<(double)V_avr/2<<" ";
    }
    cout<<endl<<(double)sum/8;
    // 여기에 코드를 작성해주세요.
    return 0;
}