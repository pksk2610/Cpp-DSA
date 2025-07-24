#include <iostream>
using namespace std;
void reverseString(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int main(){
    int n;
    cin>>n;
    char name[20];
    cin>>name;

    reverseString(name,n);
    cout<<"reverse string :"<< name<<endl;
}