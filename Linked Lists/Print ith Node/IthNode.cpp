#include<iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput() {
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data!=-1) {
        Node *newNode = new Node(data);
        if(!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}

void printIthNode(Node *head, int i) {
    int t=1;
    Node *temp = head;
    while(temp!=NULL) {
        if(t==i) {
            cout<<temp->data<<endl;
            break;
        }
        temp = temp->next;
        t++;
    }
}

int main() {
    int i;
    Node *head = takeInput();
    cin>>i;
    printIthNode(head, i);
    return 0;
}