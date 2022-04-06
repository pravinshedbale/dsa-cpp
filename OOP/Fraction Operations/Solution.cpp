#include<iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
    Fraction f1(5,4);
    Fraction f2(2,3);
    f1.add(f2);
    f1.print();
    return 0;
}