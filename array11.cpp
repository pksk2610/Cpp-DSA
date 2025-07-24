#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number[n];
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(number[j]>number[j+1]){
            int temp=number[j];
            number[j]=number[j+1];
            number[j+1]=temp;
            }
        }
       
    }
     for(int i=0;i<n;i++){
            cout<<number[i]<<" ";
        }
      
        
        
}