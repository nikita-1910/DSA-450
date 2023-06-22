#include<bits/stdc++.h>
using namespace std;

class twostack{
    int *arr, size, top1, top2;
    public:
    twostack(int n){
        size=n, arr=new int[n], top1=n/2+1, top2=n/2;
    }
    void push1(int x){
        if(top1>0){
            top1--;
            arr[top1]=x;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
        return;
    }
    void push2(int x){
        if(top2<size-1){
            top2++;
            arr[top2]=x;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
        return;
    }
    int pop1(){
        if(top1<=size/2){
            int x=arr[top1];
            top1++;
            return x;
        }
        else{
            cout<<"Stack underflow"<<endl;
            return 0;
        }
    }
    int pop2(){
        if(top2>=size/2+1){
            int x=arr[top2];
            top2--;
            return x;
        }
        else{
            cout<<"Stack underflow"<<endl;
            return 0;
        }
    }
};

int main(){
    twostack st(5);
    st.push1(5);
    st.push2(2);
    st.push2(15);
    st.push1(11);
    st.push2(7);
    cout<<"popped element from stack1 is "<<st.pop1()<<endl;
    st.push2(40);
    cout<<"popped element from stack2 is "<<st.pop2()<<endl;
    return 0;
}