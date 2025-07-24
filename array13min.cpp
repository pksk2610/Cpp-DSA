#include<iostream>
using namespace std;
int findMin(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}
int main(){
    int n;
    cin>>n;
    int number[n];
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    int minNum=findMin(number,n);
    cout<<minNum<<endl;
}