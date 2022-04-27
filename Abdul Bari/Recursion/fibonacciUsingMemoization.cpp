#include<iostream>
using namespace std;

int fib(int n, int arr[]) {
    if(n<=1) {
        arr[n] = n;
        return n;
    }
    if(arr[n-1]==-1) {
        arr[n-1] = fib(n-1, arr);
    }
    if(arr[n-2]==-1) {
        arr[n-2] = fib(n-2, arr);
    }

    return arr[n-1] + arr[n-2];
}

int main() {
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0; i<n; i++) {
        arr[i] = -1;
    }
    cout<<"Fibonaaci Number of  "<<n<<" is "<<fib(n, arr);
    delete arr;
    return 0;
}