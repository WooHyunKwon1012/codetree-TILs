#include <iostream>
using namespace std;
int main() {
    int sex, age;
    cin >> sex>>age;
    if (sex==0){
        if(age>=19){
            cout << "MAN";
        }
        else {
            cout << "BOY";
        }
    }
    if (sex==1){
        if(age>=19){
            cout << "WOMAN";
        }
        else {
            cout << "GIRL";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}