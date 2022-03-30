#include<bits/stdc++.h>
using namespace std;
void increment(int &n) {
    n++;
}
int main() {
    int i=10;
    cout<<"Before Increment"<<endl<<i<<endl;
    increment(i);
    cout<<"After Increment"<<endl<<i<<endl;
    return 0;
 }