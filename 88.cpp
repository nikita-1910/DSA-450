#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<string, vector<string>>&store){
    for(auto it:store){
        vector<string>temp_vec(it.second);
        int size=temp_vec.size();
        for(int i=0; i<size; i++){
            cout<<temp_vec[i]<<" ";
        }
        cout<<"\n";
    }
}

void solve(vector<string>&vec){
    unordered_map<string, vector<string>>store;
    for(int i=0; i<vec.size(); i++){
        string temp(vec[i]);

        sort(temp.begin(), temp.end());
        store[temp].push_back(vec[i]);
    }
    print(store);
}

int main(){
    vector<string>arr;
    arr.push_back("geeksquiz");
    arr.push_back("geeksforgeeks");
    arr.push_back("abcd");
    arr.push_back("forgeeksgeeks");
    arr.push_back("zuiqkeegs");
    arr.push_back("cat");
    arr.push_back("act");
    arr.push_back("tca");
    solve(arr);
}