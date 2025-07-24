#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int k,int mid){
    int painterCount=1;
    int boardSum=0;
    for(int i=0;i<n;i++){
        if(boardSum+arr[i]<=mid){
            boardSum+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount>k||arr[i]>mid){
                return false;
            }
            boardSum=arr[i];
        }
    }
    return true;
    

}
int painterProblem(int arr[],int n,int k){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int painter=painterProblem(arr,n,k);
    cout<<painter;
}