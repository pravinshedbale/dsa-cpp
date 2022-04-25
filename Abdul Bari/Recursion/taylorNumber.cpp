#include<iostream>
using namespace std;

int factorial(int n) {
    if(n==0) {
        return 1;
    }
    return n*factorial(n-1);
}

int power(int m, int p) {
    if(p==0) return 1;
    if(p%2==0) 
        return power(m*m, p/2);
    else
        return m*power(m*m, (p-1)/2);
}

float taylorNumber(int x, int n) {
    if(n < 0) {
        return 1;
    }
    return (power(x,n-1)/factorial(n-1)+power(x,n-2)/factorial(n-2));
}

int main() {
    int x, n;
    cin>>x>>n;
    cout<<"Taylor Sum : "<<taylorNumber(x, n);
    return 0;
}