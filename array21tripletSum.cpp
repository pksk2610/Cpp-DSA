#include<iostream>

using namespace std;


void tripletSum(int arr[],int size,int target){
     for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){

            for(int k=j+1;k<size;k++){

                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
                }
            }
        }
    }


}

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    tripletSum(arr,n,target);
   

}
    
