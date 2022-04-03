#include<bits/stdc++.h>
using namespace std;

double geometricSum(int k) {
    if(k==0) return 1;
    return (double)1/pow(2,k)+geometricSum(k-1);
}

int main() {
    int k;
    cin>>k;
    cout<<geometricSum(k);
    return 0;
}