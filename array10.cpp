#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int num;
    cin>>num;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    bool found=false;
    for(int i=0;i<n;i++){
        if(array[i]==num){
            cout<<num<<" index no  "<<i<<endl;;
            found=true;
            break;
        }
        
        }
        if(!found){
            cout<<"not Found"<<endl;
        }
    
}