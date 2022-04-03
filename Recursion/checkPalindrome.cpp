#include<iostream>
using namespace std;

bool helper(string s, int start, int end) {
    if(s[start]=='\0'||s[1]=='\0') {
        return 1;
    } else if(start>=end) {
        return 1;
    } else if(s[start]==s[end]) {
        return helper(s, start+1, end-1);
    } else {
        return 0;
    }
}

bool checkPalindrome(string s) {
    int len = s.size();
    return helper(s, 0, len-1);
}


int main() {
    string s;
    cin>>s;

    if(checkPalindrome(s)) {
        cout<<"Palindrome";
    } else {
        cout<<"Not Palindrome";
    }
    return 0;
}