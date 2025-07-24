#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(int arr[],int s,int e,int k){

    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]< k){
            mid=s+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return -1;
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
    int pivot=getPivot(arr,n);
    int result=-1;
    if(k>arr[pivot] && k<=arr[n-1]){
        result= binarySearch(arr,pivot,n-1,k);
    }
    else{
        result= binarySearch(arr,0,pivot-1,k);
    }
    cout<<result<<endl;
}