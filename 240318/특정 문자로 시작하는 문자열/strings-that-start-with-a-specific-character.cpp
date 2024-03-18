#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,sum=0, cnt=0;
    string str[20];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    char ex;
    cin>>ex;
    
    for(int i=0; i<n; i++){
        if(str[i][0]==ex){
            cnt++;
            sum+=str[i].length();
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<cnt<<" "<<(double)sum/cnt;
   
    // 여기에 코드를 작성해주세요.
    return 0;
}