#include<iostream>
#include <unordered_map>
using namespace std;
void uniqueOccurance(int arr[],int size){
    unordered_map<int,int>freq;
    for(int i=0;i<size;i++){
        freq[arr[i]]++;
    }
    for(auto it:freq){
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    uniqueOccurance(array,n);

}
