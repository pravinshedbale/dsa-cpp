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
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void printList(Node *head) {
    Node *temp=head;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeInput();
    printList(head);
    return 0;
}