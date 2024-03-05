#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    double score[5],avg,sum=0;

    for (int i=0; i<n; i++){
        cin>>score[i];
        sum=sum+score[i];
        
    }
    

    avg=(double)sum/n;
    
    cout<<fixed;
    cout.precision(1);
    cout<<avg<<endl;
    if(avg>=4.0){
        cout<<"Perfect";   
    }
    else if(avg>=3.0){
        cout<<"Good";
    }
    else {
        cout<<"Poor";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}