#include<iostream>
using namespace std;
int peakArray(int arr[],int size){

    int start=0,end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;

        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int peak=peakArray(arr,n);
    cout<<peak<<endl;
}