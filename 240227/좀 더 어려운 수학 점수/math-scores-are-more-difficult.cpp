#include <iostream>
using namespace std;
int main() {
    int A_math, A_Eng, B_math, B_Eng;
    cin >> A_math>>A_Eng;
    cin >> B_math>>B_Eng;
    if (A_math>B_math){
        cout << "A";
    }
    else if (B_math>A_math){
        cout << "B";
    }
    else {
        if (B_Eng>A_Eng){
            cout <<"B";
        }
        else if (A_Eng>B_Eng){
            cout <<"A";
        }

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}