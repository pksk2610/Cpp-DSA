#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int first=-1;
    while(start<=end){
        if(arr[mid]==key){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return first;
    
}
int lastOcc(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int last=-1;
    while(start<=end){
        if(arr[mid]==key){
            last=mid;
            start=mid+1;

        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return last;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first=firstOcc(arr,n,key);
    int last=lastOcc(arr,n,key);
    cout<<first<<" " ;
    cout<<last<<" ";
}