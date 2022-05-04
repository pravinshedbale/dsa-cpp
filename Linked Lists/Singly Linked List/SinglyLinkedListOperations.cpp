#include "Node.cpp"
Node *head = NULL;
Node *tail = NULL;
int size=0;
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
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    size++;
    return head;
}

Node* insertAtEnd(Node *head, int data) {
    Node *newNode = getNode(data);
    if(head==NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
    return head;
}

Node* insertAtPosition(Node *head, int pos, int data) {
    Node *temp = head;
    Node *newNode = new Node(data);
    int tempPos = pos;
    if(pos<=1) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    while(--pos && temp!=NULL) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    if(tempPos==size) {
        tail = newNode;
    }
    return head;
}

int getData() {
    int n;
    cout<<"Input Node Data : ";
    cin>>n;
    return n;
}

int main() {
    while(1) {
        int choice;
        cout<<"------------MENU------------"<<endl;
        cout<<"1. PRINT LIST"<<endl;
        cout<<"2. INSERT AT BEGINNING"<<endl;
        cout<<"3. INSERT AT END"<<endl;
        cout<<"4. INSERT AT POSITION"<<endl;
        cin>>choice;
        switch (choice) {
            case 1:
                printList(head);
                break;
            case 2:
                head = insertAtBeginning(head, getData());
                break;
            
            case 3:
                head = insertAtEnd(head, getData());
                break;
            
            case 4:
                int pos;
                cout<<"Position : ";
                cin>>pos;
                head = insertAtPosition(head, pos, getData());
                break;
            default:
                exit(0);
        }
    }
}

