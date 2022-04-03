#include<bits/stdc++.h>
using namespace std;

int stringLength(char s[]) {
    if(s[0]=='\0') return 0;
    return 1+stringLength(s+1);
}

int main() {
    char  s[1000];
    cin>>s;
    cout<<stringLength(s);
    return 0;
}