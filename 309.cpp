#include<bits/stdc++.h>
using namespace std;

int largestArea(int hist[], int n){
    stack<int>st;
    int max_area=0, tp, area_with_top;
    int i=0;
    while(i<n){
        if(st.empty() || hist[st.top()]<hist[i]){
            st.push(i++);
        }
        else{
            tp=st.top();
            st.pop();
            area_with_top=hist[tp]*(st.empty()?i:i-st.top()-1);
            if(max_area<area_with_top){
                max_area=area_with_top;
            }
        }
    }
    while(!st.empty()){
        tp=st.top();
        st.pop();
        area_with_top=hist[tp]*(st.empty()?i:i-st.top()-1);
        if(max_area<area_with_top){
            max_area=area_with_top;
        }
    }
    return max_area;
}

int main(){
    int hist[]={6, 2, 5, 4, 5, 1, 6};
    int n=sizeof(hist)/sizeof(hist[0]);
    cout<<"Maximum area is "<<largestArea(hist, n);
    return 0;
}