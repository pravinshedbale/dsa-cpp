#include<iostream>
using namespace std;
bool checkNumber(int a[], int size, int n) {
    if(size==0) return false;
    if(a[0]==n) return true;
    return checkNumber(a+1, size-1, n);
}

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int num;
    cin>>num;
    if(checkNumber(arr, n, num)) {
        cout<<"Found"<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }    
    return 0;
}