#include<iostream>
using namespace std;
#include "Node.cpp"


Node* takeInput() {
    int data;
    cin>>data;
    Node *head = NULL;
    while(data!=-1) {
        Node *newNode = new Node(data);
        if(!head) {
            head = newNode;
        } else {
            Node *temp = head;
            while(temp->next) {
                temp = temp->next;
            }
            temp->next = newNode; 
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