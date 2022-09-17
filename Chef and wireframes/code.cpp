#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n,m,x;
	cin>>n>>m>>x;
	int length=2*n;
	int breadth = 2*m;
	int cost=(length+breadth)*x;
	cout<<cost<<endl;
	}
	return 0;
}
