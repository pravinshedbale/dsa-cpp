#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(char s[]) {
    if(s[0]=='\0') return ;
    if(s[0]==s[1]) {
        for(int i=1;i<=strlen(s);i++) {
            s[i-1] = s[i];
        }
        removeDuplicate(s);
    }
    removeDuplicate(s+1);
}

int main() {
    char  s[1000];
    cin>>s;
    removeDuplicate(s);
    cout<<s;
    return 0;
}