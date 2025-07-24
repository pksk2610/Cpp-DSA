#include<iostream>
using namespace std;
int pivotIndex(int arr[],int n){
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
        int leftsum=0;
        for(int i=0;i<n;i++){
            int rightsum=total_sum-leftsum-arr[i];
            if(leftsum==rightsum){
                return i;
            }
            leftsum+=arr[i];
        }
        return -1;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pivot=pivotIndex(arr,n);
    cout<<pivot<<endl;
}