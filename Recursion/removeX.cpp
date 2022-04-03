#include<bits/stdc++.h>
using namespace std;

void helper(char s[], int start) {
    if(s[start]=='\0') return; 

    helper(s, start+1);
    if( s[start]=='x') {
        for(int i=start; i<=strlen(s); i++) {
            s[i] = s[i+1];
        }
    }
}

void removeX(char s[]) {
    helper(s, 0);
}

int main() {
    char  s[1000];
    cin>>s;
    removeX(s);
    cout<<s;
    return 0;
}