#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int e = 0;
    int o = n-1;

    while(o!=e) {
        if(arr[e]%2!=0) {
            int t = arr[e];
            arr[e] = arr[o];
            arr[o] = t;
            o--;
        } else if(arr[e]%2==0) {
            e++;
        }
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}