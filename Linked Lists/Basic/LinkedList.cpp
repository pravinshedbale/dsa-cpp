#include<iostream>
using namespace std;
#include "Node.cpp"

Node* getLastNode(Node *head) {
    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    return temp;
}  
Node* takeNodes() {
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1) {
        Node *n = new Node(data);
        if(head==NULL) {
            head = n;
            tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}


int main() {
    print(takeNodes());
}