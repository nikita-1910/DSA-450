#include<bits/stdc++.h>
using namespace std;
#define MAX_CHAR 256
bool isomorphic(string str1, string str2){
    int m=str1.length(), n=str2.length();
    if(m!=n){
        false;
    }
    bool marked[MAX_CHAR]={false};
    int map[MAX_CHAR];
    memset(map, -1, sizeof(map));
    for(int i=0; i<n; i++){
        if(map[str1[i]]==-1){
            if(marked[str2[i]]==true){
                return false;
            }
            marked[str2[i]]=true;
            map[str1[i]]=str2[i];
        }
        else if(map[str1[i]]!=str2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<(isomorphic("abb", "xxy")?"true":"false")<<endl;
    return 0;
}