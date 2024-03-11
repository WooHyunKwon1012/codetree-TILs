#include <iostream>
using namespace std;
int main() {
    int N,arr[1000],cnt=0,max,arr_new[1000]={};
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
        
    }
    for(int i=0; i<N; i++){
        arr_new[arr[i]]++;
    }
    max=0;
    for(int i=0; i<N; i++){
        if(arr[i]>max && arr_new[arr[i]]==1){
            max=arr[i];
            cnt=1;
        }
    }
    if(cnt==0){
        cout<<-1;
    }
    else{
        cout<<max;
    }

    
    
    return 0;
}