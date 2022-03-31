#include<iostream>
using namespace std;

int findPower(int n, int p) {
    if(p==0) return 1;
    if(p%2==0) return findPower(n*n, p/2);
    return n*findPower(n, p-1);
}

int main() {
    int n,p;
    cin>>n>>p;
    cout<<findPower(n,p);
    return 0;
}