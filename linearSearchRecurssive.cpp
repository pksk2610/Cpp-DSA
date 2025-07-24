#include<iostream>
using namespace std;

bool lineraSearch(int arr[],int size,int key){
    if(size==0)
        return false;
    
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart=lineraSearch(arr+1,size-1,key);
            return remainingPart;
    }
}
int main(){
    int size=5;
    int arr[5]={2,4,5,7,9};
    int key;
    cin>>key;
    int ans=lineraSearch(arr,size,key);

    if(ans){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;

    }
}
