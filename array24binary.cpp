#include<iostream>
using namespace std;

bool binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return true;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return false;

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
    if (binarySearch(arr,n,key)){
        cout<<"Key is Found"<<endl;
    }
    else{
        cout<<"Key is not Found"<<endl;
    }
}