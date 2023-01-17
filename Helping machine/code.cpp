#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,i;
	    cin>>n;
	    int count1=0;
	    int count2=0;
	    int count3=0;
	     int size[n];
	    for( i=0;i<n;i++){
	        cin>>size[i];
	    }
	    for(int i=0;i<n;i++){
	    if(size[i]==1 ||size[i]==2){
	        count1++;
	    }
	    else if(size[i]==3 ||size[i]==4){
	        count2++;
	    }
	    else if(size[i]==5 ||size[i]==6){
	        count3++;
	    }
	    }
	    cout<<"TYPE 1 - "<<count1<<endl;
	    cout<<"TYPE 2 - "<<count2<<endl;
	    cout<<"TYPE 3 - "<<count3<<endl;
	}
	return 0;
}
