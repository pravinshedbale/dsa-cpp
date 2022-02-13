#include<iostream>
using namespace std;
#include "Student.cpp"
int main() {
    int n;
    cout<<"Enter Number of Students : ";
    cin>>n;
    Student s[n];
    // Student s1(1,"Pravin",101);
    // cout<<s1.getRollNumber()<<" "<<s1.getName()<<" "<<s1.getAge()<<endl;
    for(int i=0;i<n;i++) {
        int rollNumber, age;
        string name;
        cout<<"Enter Data for Student "<<i+1<<endl;
        cin>>rollNumber>>name>>age;

        s[i].setName(name);
        s[i].setRollNumber(rollNumber);
        s[i].setAge(age);
    }
    cout<<"----------------Student Data-----------------"<<endl;
    for(int i=0;i<n;i++) {
        cout<<s[i].getRollNumber()<<" "<<s[i].getName()<<" "<<s[i].getAge()<<endl;
    }
    return 0;
}