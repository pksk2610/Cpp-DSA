#include<iostream>
#include<vector>
using namespace std;
void solve(string digit,string output,int index,vector<string> &ans,string mapping[]){
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }
    int number=digit[index]-'0';
    string value=mapping[number];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digit){
    vector<string> ans;
    string output="";
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,output,index,ans,mapping);
    return ans;
}
int main(){
    string input;
    cout<<"Enter digits: ";
    cin>>input;

    vector<string> ans = letterCombinations(input);

    
    for (string s : ans) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
