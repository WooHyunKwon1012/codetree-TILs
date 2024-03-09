#include <iostream>
using namespace std;
int main() {
    int n,q,arr[100],ques_num,a,b;
    cin>>n>>q;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }
    
    for(int i=0; i<q; i++){
        cin>>ques_num;
        
        int cnt=0;
        if(ques_num==1){
            cin>>a;
            
            cout<<arr[a-1]<<endl;
        }
        else if(ques_num==2){
            cin>>a;
            for(int j=0; j<n;j++){
                if(arr[j]==a){
                    cout<<j+1<<" ";
                    cnt++;
                    break;
                }
                
            }
            if(cnt==0){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else if (ques_num==3){
            cin>>a>>b;
            for(int j=a-1; j<b; j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}