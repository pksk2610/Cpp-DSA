#include<iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e,int k){
    if(s>e){
        return false;
    }
    
    int mid=s+(e-s)/2;

    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);

    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[5]={2,5,6,8,9};
    int k;
    cin>>k;

    bool ans=binarySearch(arr,0,4,k);
    if(ans){
        cout<<"Element is present in array"<<endl;
    }
    else{
        cout<<"Element is not present in array"<<endl;
    }
}