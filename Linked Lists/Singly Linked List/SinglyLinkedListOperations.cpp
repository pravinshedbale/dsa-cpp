#include "Node.cpp"

Node* getNode(int data){
    Node *newNode  = new Node(data);
    return newNode;
}

void printList(Node *head) {
    if(head==NULL) {
        cout<<"List Empty"<<endl;
    } else {
        Node *temp = head;
        while(temp!=NULL) {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
    cout<<endl;
}

Node* insertAtBeginning(Node *head, int data) {
    Node *newNode = getNode(data);
    if(head==NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    return head;
}

int main() {
    Node *head=NULL;
    while(1) {
        int choice;
        cout<<"------------MENU------------"<<endl;
        cout<<"1. PRINT LIST"<<endl;
        cout<<"2. INSERT AT BEGINNING"<<endl;
        cin>>choice;
        switch (choice) {
            case 1:
                printList(head);
                break;
            case 2:
                int element;
                cin>>element;
                head = insertAtBeginning(head, element);
                break;
            default:
                break;
        }
    }
}