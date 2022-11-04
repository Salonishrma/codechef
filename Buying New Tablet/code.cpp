#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b;
	    cin>>n>>b;
	    int w,h,p;
	    int temp=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>w>>h>>p;
	        if(p<=b)
	        {
	            temp=max(temp,w*h);
	        }
	    }
	if(temp==0)
	{
	    cout<<"no tablet"<<endl;
	}
	else 
	{
    cout<<temp<<endl;
	}
}
}
