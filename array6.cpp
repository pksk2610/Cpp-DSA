#include<iostream>
using namespace std;
int findMax(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int number[n];
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    int maxNum=findMax(number,n);
        cout<<maxNum<<endl;
    
}