#include<iostream>
using namespace std;
void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int array[],int size){
    for(int i=0;i<size-1;i+=2){
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
    }



}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    swapAlternate(arr,n);
    printArray(arr,n);
    
    
   
    
    
    
}