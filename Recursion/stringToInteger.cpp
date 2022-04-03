#include<iostream>
using namespace std;

int sToI(string s, int l) {
    if(l<0) return 0;
    return s[l]-'0'+ 10*sToI(s,l-1);
}

int main() {
    string s;
    cin>>s;
    int n = sToI(s, s.length());
    cout<<n;
}