#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int x,y,n,r;
	cin>>x>>y>>n>>r;
	int ans=((r-x*n)/(y-x));
	if(r/x<n){
	    cout<<"-1"<<endl;
	}
	else if(r/y>=n){
	    cout<<"0 ";
	    cout<<n<<endl;
	}
	else{
	    if(y>0){
	        cout<<n-ans<<" ";
	        cout<<ans<<endl;
	    }
	else{
	    cout<<n<<" 0"<<endl;
	}
	}
	}
	return 0;
}
