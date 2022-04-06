#include<bits/stdc++.h>
using namespace std;

int subsequences(string input, string output[]){
    if(input.size()==0) {
        output[0] = "";
        return 1;
    }
    int size = subsequences(input.substr(1), output);
    for(int i=0; i<size; i++) {
        output[i+size] = input[0]+output[i];
    }
    return 2*size;
}

int main() {
    string input;
    cin>>input;
    string *output = new string[(int)pow(2, input.length())];

    int len = subsequences(input, output);

    for(int i=0; i<len; i++) {
        cout<<output[i]<<endl;
    }
    return 0;
}