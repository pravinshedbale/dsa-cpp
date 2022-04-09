//Minimum Cars required 
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    
	    int cars = 0;
	    cars = n/4;
	    if(n%4!=0) {
	        cars++;
	    }
	    cout<<cars<<endl;
	}
	return 0;
}
