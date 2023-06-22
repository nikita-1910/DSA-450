//square root of an integer
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt=0; 
    cin>>n;
    for(int i=1; i<sqrt(n); i++){
        cnt++;
    }
    cout<<cnt;
}
