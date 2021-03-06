#include<iostream>
using namespace std;


double taylorNumber(float x, float n) {
    static double p=1, f=1;
    double ans;
    if(n == 0) 
        return 1;

    ans = taylorNumber(x,n-1);
    p = p*x;
    f = f*n;
    return ans+(p/f);
}

int main() {
    float x, n;
    cin>>x>>n;
    cout<<"Taylor Sum : "<<(float)taylorNumber(x, n);
    return 0;
}