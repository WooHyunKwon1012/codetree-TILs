#include <iostream>
#include <string>
using  namespace std;
int main() {
    string str;
    cin>>str;
    int len=str.length();
    bool exists1 = false;
    bool exists2 = false;
    for(int i=0; i<len-1; i++){
        if(str.substr(i,2)=="ee"){
            exists1=true;
        }
        
        
        if(str.substr(i,2)=="ab"){
            exists2=true;
        }
        
    }
    if(exists1==true){
        cout<<"Yes"<<" ";
    }
    else{
        cout<<"No"<<" ";
    }
    if(exists2==true){
        cout<<"Yes"<<" ";
    }
    else{
        cout<<"No"<<" ";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}