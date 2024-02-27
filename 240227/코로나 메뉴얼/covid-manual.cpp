#include <iostream>
using namespace std;
int main() {
    int A_tem, B_tem, C_tem;
    int tem=0;
    char A_Flu, B_Flu, C_Flu;
    cin >> A_Flu>>A_tem;
    cin >> B_Flu>>B_tem;
    cin >> C_Flu>>C_tem;
    if ((A_Flu=='Y') && (A_tem>=37)){
        tem=tem+1;
    }
    if ((B_Flu=='Y') &&(B_tem>=37)){
        tem=tem+1;
    }
    if ((C_Flu=='Y') &&(C_tem>=37)){
        tem=tem+1;
    }

    if(tem>=2){
        cout<< "E";
    }
    else{
        cout<<"N";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}