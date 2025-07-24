#include<iostream>
using namespace std;

int arraySum(int arr[],int size){
    if(size==0)
        return 0;

    if(size==1){
        arr[0];
    }
    
    return arr[0]+arraySum(arr+1,size-1);
}

int main(){
    int size=5;
    int arr[5]={2,3,5,6,7};
    cout<<"Sum of array elements is "<<arraySum(arr,size)<<endl;
}