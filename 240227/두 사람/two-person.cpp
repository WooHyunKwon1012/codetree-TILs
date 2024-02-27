#include <iostream>
using namespace std;
int main() {
    int a_age,b_age;
    char a_sex,b_sex;
    cin >>a_age>>a_sex;
    cin >> b_age>>b_sex;
    if ((a_age>=19 || b_age>=19)){
        if(a_sex == 'M' || b_sex =='M'){
            cout <<1;
        }
    }
    else{
        cout<<0;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}