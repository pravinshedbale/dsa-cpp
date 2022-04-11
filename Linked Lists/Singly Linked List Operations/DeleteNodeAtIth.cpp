#include<iostream>
using namespace std;
#include "Node.cpp"

Node* deleteAtIth(Node *head, int i) {
    int count=0;
    Node *temp = head;
    if(i==1) {
        head = temp->next;
        delete temp;
        return head;
    }

    while(temp!=NULL and count<i-1) {
        temp = temp->next;
        count++;
    }
    if (temp==NULL or temp->next==NULL)
        return head;
    
    Node *a = temp->next;
    Node *b = a->next;
    temp->next = b;
    delete a;
    return head;
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
    int  pos;
    Node *head = takeNodes();
    cout<<"Enter Position : ";
    cin>>pos;

    head = deleteAtIth(head, pos);

    print(head);
    return 0;
}