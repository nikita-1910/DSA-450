#include<bits/stdc++.h>
using namespace std;

int swapCount(string str){
    int left=0, right=0, swap=0, imbalance=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='['){
            left++;
            if(imbalance>0){
                swap+=imbalance;
                imbalance--;
            }
        }
        else if(str[i]==']'){
            right++;
            imbalance=right-left;
        }
    }
    return swap;
}

int main(){
    string str="[]][][";
    cout<<swapCount(str);
}
