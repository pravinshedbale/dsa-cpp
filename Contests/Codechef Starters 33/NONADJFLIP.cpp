#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    string s;
	    cin>>n>>s;
	    
	    int tIdx=0;
	    int tempArr[1000];
	    for(int i=0; i<n; i++) {
	        if(s[i]=='1') {
	            tempArr[tIdx++] = i;
	        }
	    }
        if(tIdx==0) {
            cout<<0<<endl;
            break;
        }
        int ans = 0;   
        for(int i=0; i<tIdx-1; i++) {
            if(tempArr[i]+1==tempArr[i+1]) {
                ans++;
            }
        }
        cout<<ans<<endl;lp
    }
    return 0;
}
