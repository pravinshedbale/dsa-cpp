#include<iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start-1;
    for(int j=start;j<end;j++) {
        if(arr[j]<pivot) {
            i++;
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    int t = arr[end];
    arr[end] = arr[i+1];
    arr[i+1] = t;
    return i+1;
}

void quickSort(int arr[], int start, int end) {
    if(start>=end) return ;
    int pi = partition(arr, start, end);
    quickSort(arr, start, pi-1);
    quickSort(arr, pi+1, end);
}

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}