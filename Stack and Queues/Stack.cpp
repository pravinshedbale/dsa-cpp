#include<iostream>
using namespace std;

class Stack {
    int *data;
    int top;
    int capacity;
    public:
        Stack(int size) {
            data = new int[size];
            top = -1;
            capacity = size;
        }

        int size() {
            return top;
        }

        bool isEmpty() {
            return top==-1;
        }

        bool isFull() {
            return top==capacity;
        }

        void push(int e) {
            top++;
            if(!isFull) {
                data[top] = e;
            } else {
                cout<<"Stack Full"<<endl;
            }
        }

        int pop() {
            if(!isEmpty) {
                return data[top];
                top--;
            } else {
                return -1;
            }
        } 
};

int main() {
    Stack *s = new Stack(5);

    while(1) {
        int choice;

        cout<<"1. PUSH"<<endl;
        cout<<"2. POP"<<endl;
        cin>>choice;
        switch(choice) {
            case 1:
                int data;
                cin>>data;
                s->push(data);
                break;
            
            case 2:
                s->pop();
                break;

            case 3:
                exit(0);
        }
    }
    return 0;
}