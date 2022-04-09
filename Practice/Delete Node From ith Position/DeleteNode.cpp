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

Node* deleteNode(Node *head, int i) {
    int count = 0;
    Node *temp = head;
    if(i==0) {
        head = temp->next;
        delete temp;
        return head;
    }
    while(count < i-1 && temp!=NULL) {
        temp = temp->next;
        count++;
    }
    if(temp==NULL || temp->next==NULL)
        return head;

    Node *a = temp->next;
    Node *b = a->next;
    temp->next = b;
    delete a;
    return head;
}

int main() {
    int i, data;
    Node *head = takeInput();
    printList(head);
    cin>>i;
    head = deleteNode(head, i);
    printList(head);
    return 0;
}