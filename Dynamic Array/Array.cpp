#include<iostream>
using namespace std;
#include "DynamicArray.cpp"

int main() {
    DynamicArray a;
    a.add(10);
    a.add(20);
    a.add(30);
    a.add(40);
    a.add(50);
    cout<<a.get(4)<<endl;
    cout<<a.length()<<endl;
    a.add(60);
    cout<<a.length()<<endl;
    return 0;
}