#include<iostream>
using namespace std;
int main(){
    int number[5];
    for(int i=0;i<5;i++){
        cin>>number[i];
    }
    for(int i=4;i>=0;i--){
        cout<<number[i]<<" ";
    }
}