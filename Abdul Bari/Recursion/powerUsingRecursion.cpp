#include<iostream>
using namespace std;

int power(int m, int p) {
    if(p==0) return 1;
    if(p%2==0) 
        return power(m*m, p/2);
    else
        return m*power(m*m, (p-1)/2);
}

int main() {
    int n,p;
    cin>>n;
    cin>>p;
    cout<<"Ans : "<<power(n, p);
    return 0;
}