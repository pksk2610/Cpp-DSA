#include<iostream>
#include <algorithm>
using namespace std;
void sortPair(int arr[],int size){

    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}


using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortPair(arr,n);
    


}

