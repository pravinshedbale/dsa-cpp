#include<bits/stdc++.h>
using namespace std;
int main() {
    int r,c;
    cin>>r>>c;
    int **p = new int*[r];
    for(int i=0;i<r;i++) {
        p[i] = new int[c];
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>p[i][j];
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<r; i++) {
        delete [] p[i];
    }
    delete []p;
    return 0;
}