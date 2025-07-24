#include<iostream>
#include<string>
#include<vector>

using namespace std;

int compress(vector<char>& chars){
    int write=0;
    int read=0;

    while(read<chars.size()){
        char currentChar=chars[read];
        int count=0;

        while(read<chars.size() && chars[read]==currentChar){
            read++;
            count++;

        }
        chars[write++]=currentChar;

        if(count>1){
            string countStr=to_string(count);

            for(char digit:countStr){
                chars[write++]=digit;
            }
        }
    }
    return write;

}
int main(){
    string s;
    getline(cin,s);
    vector<char> chars(s.begin(), s.end());

    int newLength = compress(chars);
    

    for (int i = 0; i < newLength; i++) {

        cout << chars[i];
    }
    cout << endl;


   
}