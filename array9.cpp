#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int avgNum[n];
    int sum=0;
    double avg=0;
    for(int i=0 ;i<=n-1;i++){
        cin>>avgNum[i];
    }
    for(int i=0;i<n;i++){
        sum+=avgNum[i];
        //avg=double(sum/n);
    }
    avg=static_cast<double>(sum)/n;
    cout<<avg<<endl;
}
