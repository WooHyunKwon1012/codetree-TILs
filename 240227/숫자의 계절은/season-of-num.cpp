#include <iostream>
using namespace std;
int main() {
    int month;
    cin >> month;
    if (month<=5 && month>=3){
        cout << "Spring";
    }
    else if (month<=8 && month>=6){
        cout << "Summer";
    }
    else if (month<=11 && month>=9){
        cout << "Fall";
    }
    else {
        cout << "Winter";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}