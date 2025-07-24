#include<iostream>
using namespace std;

int main(){
    int number[5];
    int sum=0;
    for(int i=0;i<5;i++){
        cin>>number[i];
    }
    for(int i=0;i<5;i++){
        sum+=number[i];
        

    }
    cout<<sum<<endl;

}