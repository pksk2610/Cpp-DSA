#include<iostream>
#include<vector>
using namespace std;
vector<int>reverse(vector<int>v,int m){
    int s=m+1,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int>ans=reverse(arr,m);
    print(ans);
}