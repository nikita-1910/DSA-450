#include<bits/stdc++.h>
using namespace std;

string secondMostRepeated(vector<string>str){
    unordered_map<string, int>mp;
    for(int i=0; i<str.size(); i++){
        mp[str[i]]++;
    }
    int first=INT_MIN, sec=INT_MIN;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second>first){
            sec=first;
            first=it->second;
        }
        else if(it->second>sec && it->second!=first){
            sec=it->second;
        }
    }
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second==sec){
            return it->first;
        }
    }

}

int main(){
    vector<string>str={"ccc", "aaa", "ccc", "ddd", "aaa", "aaa"};
    cout<<secondMostRepeated(str);
}