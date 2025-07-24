#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int number[n];
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    bool found=search(number,n,key);
    if(found){
        cout<<"Key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
        
    }

}