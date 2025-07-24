#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<","<<j<<endl;
                found=true;
                break;
            }    
        }
        if(found){
            break;
        }
        
    }
    if(!found){
            cout<<"No Pair Found"<<endl;
        }
}    