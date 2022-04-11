#include<iostream>
using namespace std;
#include "Node.cpp"

Node* insertAtIth(Node *head, int i, int data) {
    Node *newNode = new Node(data);
    int count=0;
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
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
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
    int data, pos;
    Node *head = takeNodes();
    cout<<"Enter Position : ";
    cin>>pos;

    cout<<"Enter Data : ";
    cin>>data;

    head = insertAtIth(head, pos, data);

    print(head);
    return 0;
}