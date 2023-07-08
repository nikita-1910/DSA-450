#include<bits/stdc++.h>
using namespace std;

int longestPalindromic(string str){
    int n=str.size();
    if(n<2){
        return n;
    }
    int maxLen=1, start=0, low, high;
    for(int i=0; i<n; i++){
        low=i-1, high=i+1;
        while(high<n && str[high]==str[i]){
            high++;
        }
        while(low>=0 && str[low]==str[i]){
            low--;
        }
        while(low>=0 && high<n && str[low]==str[high]){
            low--, high++;
        }
        int len=high-low-1;
        if(maxLen<len){
            maxLen=len;
            start=low+1;
        }
    }
    cout<<"Longest Palindrome is : ";
    cout<<str.substr(start, maxLen);
    return maxLen;
}

int main(){
    string str="forgeeksskeegfor";
    cout<<"\nLength is : "<<longestPalindromic(str)<<endl;
}