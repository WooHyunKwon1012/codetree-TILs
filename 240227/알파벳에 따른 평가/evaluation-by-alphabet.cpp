#include <iostream>
using namespace std;
int main() {
    char Eng;
    cin >> Eng;
    
    if ( Eng == 'S'){
        cout << "Superior";
    }

    else if ( Eng == 'A'){
        cout << "Excellent";
    }
    else if ( Eng == 'B'){
        cout << "Good";
    }
    else if ( Eng == 'C'){
        cout << "Usually";
    }
    else if ( Eng == 'D'){
        cout << "Effort";
    }
    else {
        cout << "Failure";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}