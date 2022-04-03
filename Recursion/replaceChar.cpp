#include<bits/stdc++.h>
using namespace std;

void replaceChar(char s[], char a, char b) {
    if(s[0]=='\0') return ;
    if(s[0]==a) s[0] = b;
    replaceChar(s+1,a,b);
}

int main() {
    char  s[1000];
    cin>>s;
    char a, b;
    cin>>a>>b;
    replaceChar(s, a, b);
    cout<<s;
    return 0;
}