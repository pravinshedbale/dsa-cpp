#include<bits/stdc++.h>
using namespace std;

void helper(char s[], int start) {
    if(s[start]=='\0') return; 

    if( s[start]=='p' && s[start+1]=='i') {
        for(int i=strlen(s); i>=start+2; i--) {
            s[i+2] = s[i];
        }
        s[start] = '3';
        s[start+1] = '.';
        s[start+2] = '1';
        s[start+3] = '4';
    }

    helper(s, start+1);
}

void replacePi(char s[]) {
    helper(s, 0);
}

int main() {
    char  s[1000];
    cin>>s;
    replacePi(s);
    cout<<s;
    return 0;
}