//Count triplets in a sorted DLL whose sum is equal to given value “X”.
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev, *next;
};

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

void push(Node **head, int d){
    Node *temp=new Node();
    temp->data=d;
    temp->prev=NULL;
    temp->next=(*head);
    if((*head)!=NULL){
        (*head)->prev=temp;
    }
    (*head)=temp;
}

int findTriplets(Node* head, int sum){
    Node *ptr1, *ptr2, *ptr3;
    int count=0;
    unordered_map<int, Node*>mp;
    for(ptr1=head; ptr1!=NULL; ptr1=ptr1->next){
        mp[ptr1->data]=ptr1;
    }
    for(ptr2=head; ptr2!=NULL; ptr2=ptr2->next){
        for(ptr3=ptr2->next; ptr3!=NULL; ptr3=ptr3->next){
            int temp_sum=ptr2->data+ptr3->data;
            if(mp.find(sum-temp_sum)!=mp.end() && mp[sum-temp_sum]!=ptr2 && mp[sum-temp_sum]!=ptr3){
                count++;
            }
        }
    }
    return count/3;
}

int main(){
    Node *head=NULL;
    int sum;
    cin>>sum;
    push(&head, 60);
    push(&head, 50);
    push(&head, 40);
    push(&head, 20);
    push(&head, 10);
    print(head);
    cout<<findTriplets(head, sum);
}




