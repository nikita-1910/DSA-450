#include<bits/stdc++.h>
using namespace std;

string sequence(string str[], string input){
    string ans="";
    for(int i=0; i<input.length(); i++){
        if (input[i]==' '){
            ans+="0";
        }
        else{
            int index=input[i]-'A';
            ans+=str[index];
        }
    }
    return ans;
}

int main(){
    string str[]={"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999"};
    string input="GEEKSFORGEEKS";
    cout<<sequence(str, input);
}