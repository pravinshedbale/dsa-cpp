//The Cheaper Cab 
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int f, s;
	    cin>>f>>s;
	    if(f<s) {
	        cout<<"First"<<endl;
	    } else if(s<f) {
	        cout<<"Second"<<endl;
	    } else {
	        cout<<"Any"<<endl;
	    }
	}
	return 0;
}