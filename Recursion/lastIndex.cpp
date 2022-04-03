#include<iostream>
using namespace std;

int lastIndex(int a[], int size, int n) {
    if(size==0) return -1;
    if(a[size]==n) return size;
    return lastIndex(a, size-1, n);
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
    cout<<"Last Index : "<<lastIndex(arr, n, num);
    return 0;
}
