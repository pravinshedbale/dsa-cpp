#include<iostream>
using namespace std;


string keyMap[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int keypad(int num, string output[]){
    if(num==0) {
        output[0] = "";
        return 1;
    }

    int smallOpSize = keypad(num/10, output);
    string key = keyMap[num%10];
    int ans_size = smallOpSize*key.size();
    string temp[ans_size];

    int k=0;
    for(int i=0; i<smallOpSize; i++) {
        for(int j=0; j<key.size(); j++) {
            temp[k++] = output[i]+key[j];
        }
    }
    for(int i=0; i<ans_size; i++) {
        output[i] = temp[i];
    }
    return key.size()*smallOpSize;
}

int main() {
    int n;
    cin>>n;

    string arr[500];

    int size = keypad(n, arr);
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}