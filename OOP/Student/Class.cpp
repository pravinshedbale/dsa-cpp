#include<bits/stdc++.h>
using namespace std;
#include "Student.cpp"

int main() {
    char name[]="Pravin";
    Student s1(24, name);
    s1.display();

    name[0]='T';
    s1.display();
    return 0;
}