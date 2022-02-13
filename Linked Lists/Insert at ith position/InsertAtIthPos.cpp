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

void printList(Node *head) {
    Node *temp = head;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* insertAtIthPos(Node *head, int i, int data) {
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if(i==0) {
        newNode->next = head;
        head = newNode;
        return head;
    }
    while(count < i-1 && temp!=NULL) {
        temp = temp->next;
        count++;
    }
    if(temp!=NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

int main() {
    int i, data;
    Node *head = takeInput();
    printList(head);
    cin>>i;
    cin>>data;
    head = insertAtIthPos(head, i, data);
    printList(head);
    return 0;
}