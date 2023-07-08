//Missing Number in AP
#include<bits/stdc++.h>
using namespace std;

bool isElement(int a, int b, int c){
    if(c==0){
        return a==b;
    }
    if(a==b){
        return 1;
    }
    if((b-a)%c==0 && (b-a)/c>0){
        return 1;
    }
    return 0;
}

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(isElement(a, b, c)){
        cout<<"b is in sequence of ap";
    }
    else{
        cout<<"b is not in sequence of ap";
    }
}
