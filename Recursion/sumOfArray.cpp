#include<iostream>
using namespace std;
int getSum(int a[], int size) {
    if(size==0) return 0;
    return a[0]+ getSum(a+1, size-1);
}

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Sum : "<<getSum(arr, n);
    return 0;
}