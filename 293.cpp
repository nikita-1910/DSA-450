#include<iostream>
using namespace std;
#define MAX 1000
int a[MAX];
int top=-1;
bool push(int x){
  if(top>=(MAX-1)){
      cout<<"stack overflow\n";
      return false;
  }
  else{
      top++;
      a[top]=x;
      cout<<"pushed element is: "<<x<<endl;
      return true;
  }
}

int pop(){
    if(top<0){
      cout<<"stack uderflow\n";
      return 0;
  }
  else{
      int res=a[top];
      top--;
      return res;
  }
}

int peek(){
    if(top<0){
      cout<<"stack uderflow\n";
      return 0;
  }
  else{
      int x=a[top];
      return x;
  }
}

bool isEmpty(){
    return (top<0);
}

int main(){
    isEmpty();
    push(10);
    push(20);
    push(30);
    cout<<pop()<<" popped from stack\n";
    cout<<"elements present in the stack are: ";
    while(isEmpty()==false){
        cout<<peek()<<" ";
        pop();
    }

}
