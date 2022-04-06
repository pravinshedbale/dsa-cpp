#include<iostream>
using namespace std;

class Student {
    private:
        int rollNumber;
        string name;
    
    public:

        Student(string name, int rollNumber) {
            this->name = name;
            this->rollNumber = rollNumber;
        }

        void setRollNumber(int rollNumber) {
            this->rollNumber = rollNumber;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return this->name;
        }

        int getRollNumber() {
            return this->rollNumber;
        }


};

int main() {
    Student *s1 = new Student("Pravin", 22);
    // s1->setName("Pravin");
    // s1->setRollNumber(22);

    cout<<s1->getName()<<endl<<s1->getRollNumber();
    return 0;
}