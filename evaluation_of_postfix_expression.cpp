#include<bits/stdc++.h>
using namespace std;

int evaluate(string expression){
    stack<int>st;
    for(int i=0; i<expression.size(); i++){
        if(isdigit(expression[i])){
            st.push(expression[i]-'0');
        }
        else{
            int val1=st.top();
            st.pop();
            int val2=st.top();
            st.pop();
            switch(expression[i]){
                case '+':
                    st.push(val2+val1);
                    break;
                case '-':
                    st.push(val2-val1);
                    break;
                case '*':
                    st.push(val2*val1);
                    break;
                case '/':
                    st.push(val2/val1);
                    break;
            }
        }
    }
    return st.top();
}

int main(){
    cout<<evaluate("231*+9-");
}