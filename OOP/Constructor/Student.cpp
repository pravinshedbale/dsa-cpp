#include<iostream>
using namespace std;

class Student {
    public:
        Student() {
            cout<<"Constructor 1 Called"<<endl;
        }
        Student(int rollNum) {
            cout<<"Constructor 2 Called"<<endl;
        }
        Student(int rollNum, string name) {
            cout<<"Constructor 3 Called"<<endl;
        }
};

int main() {
    Student s1;
    Student s2(10);
    Student s3(10, "Pravin");
    return 0;
}