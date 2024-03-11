#include <iostream>
using namespace std;
int main() {
    int N,arr[1000]={},cnt=0;
    cin>>N;

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int max_pos=N;
    int first_max;
    while(true){
        int max=arr[0];
        
        for(int i=0; i<max_pos;i++){
            
            if(arr[i]>max){
                max=arr[i];

            }
        }
        for(int i=0; i<max_pos; i++){
            if(arr[i]==max){
                first_max=i;
                break;
            }
        }
        max_pos=first_max;
              
        
        cout<<max_pos+1<<" ";
        if(max_pos==0){
            break;
        }
        
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}