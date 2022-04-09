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

int getLength(Node *head) {
    Node *temp = head;
    int listLength = 0;
    while(temp!=NULL) {
        listLength++;
        temp = temp->next;
    }
    return listLength;
}

int main() {
    Node *head = takeInput();
    cout<<getLength(head)<<endl;
}