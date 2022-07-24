#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    int temp=n-k;
	if(n==k){
	    cout<<n*x<<endl;
	}
	if(k==0){
	    if(x<y){
	        cout<<x*n<<endl;
	    }
	    else{
	        cout<<y*n<<endl;
	    }
	}
	else if(k<n){
	    if(x>y){
	       cout<<k*x+temp*y<<endl; 
	    }
	    if(x==y){
	        cout<<n*x<<endl;
	    }
	    else if(x<y){
	        cout<<n*x<<endl;
	    }
	}
	}
	return 0;
}
