#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool checkInclusion(string s1, string s2){
    if(s1.length()>s2.length()) return false;

    vector<int>freq1(26,0);
    vector<int>freq2(26,0);

    for(int i=0;i<s1.length();i++){
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;
 
    }
    
    if(freq1==freq2) return true;

    for(int i=s1.length();i<s2.length();i++){
        freq2[s2[i]-'a']++;
        freq2[s2[i - s1.length()] - 'a']--; 

        if(freq1==freq2) return true;
    }
    return false;


}
int main(){
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);

    if(checkInclusion(s1,s2)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}