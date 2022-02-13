#include<bits/stdc++.h>
using namespace std;
#include "Fraction.cpp"

int main() {
    Fraction f1(5,10);
    Fraction f2(3,5);
    Fraction f3 = f1.add(f2);
    f3.printFraction();
    return 0;
}