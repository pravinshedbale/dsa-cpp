#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int k;
    cin>>k;

    int low = 0;
    int high = n-1;
    int ans = -1;

    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]==k) {
            ans = mid;
            high = mid-1;
        } else if(arr[mid]<k) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    if(ans!=-1) {
        cout<<"First Occurence of "<<k<<" is "<<ans;
    } else  {
        cout<<"Element Not Present";
    }
    return 0;
}