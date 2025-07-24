#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size==0|| size==1)
        return true;
    
    if(arr[0]>arr[1])
        return false;

    bool reaminigPart=isSorted(arr+1, size-1);
        return reaminigPart;
}

int main(){
    int size=5;
    int arr[5]={3,4,5,6,8};

    if(isSorted(arr,size)){
        cout<<"The array is sorted"<<endl;

    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
}