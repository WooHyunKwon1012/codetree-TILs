#include <iostream>
using namespace std;
int main() {
    int score_mid, score_end;
    cin >> score_mid>> score_end;
    if(score_mid>=90){
        if(score_end>=95){
            cout << 100000;
        }
        else if(score_end>=90){
            cout<<50000;
        }
        else{
            cout<<0;
        }
    }
    else{
        cout<<0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}