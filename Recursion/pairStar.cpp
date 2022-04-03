#include<bits/stdc++.h>
using namespace std;

void helper(char s[], int start) {
    if(s[start]=='\0') return; 

   
    if( s[start]==s[start+1]) {
        for(int i=strlen(s); i>=start+1; i--) {
            s[i+1] = s[i];
        }
        s[start+1] = '*';
    }
     helper(s, start+1);
}

void pairStar(char s[]) {
    helper(s, 0);
}

int main() {
    char  s[1000];
    cin>>s;
    pairStar(s);
    cout<<s;
    return 0;
}