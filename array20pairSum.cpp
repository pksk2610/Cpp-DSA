#include<iostream>
using namespace std;
void pairSum(int arr[],int size,int S){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==S){
                cout<<arr[i]<<" "<<arr[j]<<"  ";
            }
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    int S;
    cin>>S;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pairSum(arr,n,S);
    
    
}