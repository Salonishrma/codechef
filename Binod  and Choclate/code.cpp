#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int a,b;
	cin>>a>>b;
	int x=a+b;
	if(x%3==0 ||a%3==0 || b%3==0){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	}
	return 0;
}
