#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n, q;
    cin>>n>>m>>q;
    vector<int>x(q+2);
    vector<int>y(q+2);
    x[0]=0, y[0]=0;
    for(int i=1; i<=q; i++){
        cin>>x[i]>>y[i];
    }
    x[x.size()-1]=n+1;
    y[y.size()-1]=m+1;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int mxx=0, mxy=0;
    for(int i=0; i<x.size()-1; i++){
        mxx=max(mxx, x[i+1]-x[i]-1);
        mxy=max(mxy, y[i+1]-y[i]-1);
    }
    cout<<mxx*mxy;
}

