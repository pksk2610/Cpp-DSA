#include<iostream>
using namespace std;
int findUnique(int array[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^array[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
         
    
    }
    int unique=findUnique(arr,n);
    cout<<unique;
    

}
