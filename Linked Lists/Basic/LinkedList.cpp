#include<iostream>
using namespace std;
#include "Node.cpp"
 
Node* getNode(int data) {
    Node *newNode = new Node(data);
    return newNode;
}

void print(Node *head) {
    Node *temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main() {
  
}