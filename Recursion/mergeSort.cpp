#include<bits/stdc++.h>
using namespace std;

void merge(int left[], int size1, int right[], int size2, int arr[]) {
    int i=0, j=0, k=0;
    while(i<size1 && j<size2) {
        if(left[i]<right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    while(i<size1) {
        arr[k++] = left[i++];
    }
    while(j<size2) {
        arr[k++] = right[j++];
    }
}

void mergeSort(int *arr, int n) {
    if(n==1) return ;
    int *left = new int[n/2];
    int size1 = n/2;

    int *right = new int[n/2];
    int size2 = n-size1;

    for(int i=0;i<size1;i++) {
        left[i] = arr[i]; 
    }
    
    int k=0;
    for(int i=size1; i<n;i++) {
        right[k++] = arr[i];
    }

    mergeSort(left, size1);
    mergeSort(right, size2);
    
    merge(left, size1, right, size2, arr);

}

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    mergeSort(arr, n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<"\t";
    }
    return 0;
}