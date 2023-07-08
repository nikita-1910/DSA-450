#include<bits/stdc++.h>
using namespace std;

int precedence(char op){
    if(op=='+' || op=='-'){
        return 1;
    }
    if(op=='*' || op=='/'){
        return 2;
    }
    return 0;
}

int applyOp(int a, int b, char op){
    switch(op){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
    }
}

int evaluate(string expression){
    stack<int>values;
    stack<char>ops;
    for(int i=0; i<expression.size(); i++){
        if(expression[i]==' '){
            continue;
        }
        else if(expression[i]=='('){
            ops.push(expression[i]);
        }
        else if(isdigit(expression[i])){
            int val=0;
            while (i<expression.size() && isdigit(expression[i])){
                val=(val*10)+(expression[i]-'0');
                i++;
            }
            values.push(val);
        }
        else if(expression[i]==')'){
            while (!ops.empty() && ops.top()!='('){
                int val2=values.top();
                values.pop();
                int val1=values.top();
                ops.pop();
                char op=ops.top();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            if(!ops.empty()){
                ops.pop();
            }
        }
        else{
            while(!ops.empty() && precedence(ops.top())>=precedence(expression[i])){
                int val2=values.top();
                values.pop();
                int val1=values.top();
                ops.pop();
                char op=ops.top();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.push(expression[i]);
        }
    }
    while (!ops.empty()){
        int val2=values.top();
        values.pop();
        int val1=values.top();
        ops.pop();
        char op=ops.top();
        ops.pop();
        values.push(applyOp(val1, val2, op));
    }
    return values.top();
}

int main(){
    int ans=evaluate("2+2");
    cout<<ans;
    return 0;
}