#include<iostream>
using namespace std;


double taylorNumber(float x, float n) {
    static double s;
    if(n==0) {
        return s;
    }
    s = 1+x/n*s;
    return taylorNumber(x, n-1);
}

int main() {
    float x, n;
    cin>>x>>n;
    cout<<"Taylor Sum : "<<(float)taylorNumber(x, n);
    return 0;
}