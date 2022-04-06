#include<bits/stdc++.h>
using namespace std;
#include "Student.cpp"

int main() {
    char name[] = "Pravin";
    Student s1(23, name);
    s1.display();

    name[3] = 'w';
    Student s2(23, name);
    s2.display();

    s1.display();
    return 0;
}