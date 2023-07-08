#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>str){
    int ans=str[0].size(), n=str.size();
    for(int i=0; i<n; i++){
        int j=0;
        while(j<str[i].size() && str[i][j]==str[0][j]){
            j++;
        }
        ans=min(ans, j);
    }
    return str[0].substr(0, ans);
}

int main(){
    vector<string>str={"flower", "flow", "flight"};
    cout<<longestCommonPrefix(str);
}