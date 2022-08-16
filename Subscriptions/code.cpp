#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n,x;
	cin>>n>>x;
	int ans=n/6;
	if(n<=6){
	    cout<<x<<endl;
	}
	else{
	    if(n%6==0){
	    cout<<ans*x<<endl;
	    }
	    else{
	        ans++;
	        cout<<ans*x<<endl;
	    }
	}
	}
	return 0;
}
