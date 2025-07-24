#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number[n];
    
   
    for(int i=0;i<=n-1;i++){
        cin>>number[i];
    }
    int min=number[0];

    for(int i=1 ; i<=n-1;i++){
        if (number[i]<min){
        min=number[i];
        }
    }
    cout<< min<<endl;
}