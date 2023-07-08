#include<bits/stdc++.h>
using namespace std;

bool helper(unordered_map<string, bool>mp, string word){
    if(word.length()==0){
        return true;
    }
    string temp="";
    for(int i=0; i<word.length(); i++){
        temp+=word[i];
        if(mp.find(temp)!=mp.end() && helper(mp, word.substr(i+1))){
            return true;
        }
    }
    return false;
}

string isParsable(vector<string>dictionary, string word){
    unordered_map<string, bool>mp;
    for(auto x:dictionary){
        mp[x]=true;
    }
    if(helper(mp, word)){
        return "yes";
    }
    else{
        return "no";
    }
}

int main(){
    vector<string>dictionary{"mobile","samsung","sam","sung", "and", "mangok","icecream","and", "go","i","like","ice","cream"};
    string word="samsungandmangok";
    cout<<isParsable(dictionary, word)<<endl;
}