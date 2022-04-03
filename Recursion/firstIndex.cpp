#include<iostream>
using namespace std;

int firstIndex(int a[], int size, int n) {
    if(size==0) return -1;
    if(a[0]==n) return 0;
    return 1+firstIndex(a+1, size-1, n);
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
    cout<<"First Index : "<<firstIndex(arr, n, num);
    return 0;
}