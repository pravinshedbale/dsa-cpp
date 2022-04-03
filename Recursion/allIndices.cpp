#include<iostream>
using namespace std;

int allIndices(int arr[], int num, int size, int output[]) {
    if(size==0) return 0;
    int idx = allIndices(arr, num, size-1, output);
    if(arr[size-1]==num) {
        output[idx] = size-1;
        return idx+1;
    } else {
        return idx;
    }
}

int main() {
    int size;
    cin>>size;
    int *arr = new int[size];
    int *output = new int[size];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    int num;
    cin>>num;
    int opSize = allIndices(arr,num,size,output);
    for(int i=0;i<opSize;i++) {
        cout<<output[i]<<"\t";
    }
    return 0;
}


