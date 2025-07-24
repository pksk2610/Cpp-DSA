#include<iostream>
#include<algorithm>
using namespace std;
bool ispossible(int arr[],int n,int k,int mid){
    int cowCount=1;
    int lastPostion=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastPostion>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPostion=arr[i];
        }
    }
    return false;

}
int aggressiveCow(int arr[],int n,int k){
    sort(arr,arr+n);
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;

        }

        else{
            e=mid-1;
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
    cout<<aggressiveCow(arr,n,k);
}

