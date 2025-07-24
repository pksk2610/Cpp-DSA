#include<iostream>
#include <string> 
using namespace std;

string replaceSpace(string str){
    string result="";

    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            result+="@40";
        }
        else{
            result+=str[i];
        }
    }
    return result;
}

int main(){
    string str;

    getline(cin, str);  

    cout<<replaceSpace(str)<<endl;


}