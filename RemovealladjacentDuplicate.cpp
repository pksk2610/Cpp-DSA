#include<iostream>
#include<string>
using namespace std;

string removeDuplicate(string s){
    string result="";

    for(char c:s){
        if(!result.empty()&& result.back()==c){
            result.pop_back();
        }
        else{
            result.push_back(c);
        }
    }
    return result;

}
int main(){
    string s;
    getline(cin,s);
    cout<<removeDuplicate(s)<<endl;
}