{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
using namespace std;\
\
int main() \{\
	// your code goes here\
	int t;\
	cin>>t;\
	while(t--)\{\
	    int n,k,x,y;\
	    cin>>n>>k>>x>>y;\
	    int temp=n-k;\
	if(n==k)\{\
	    cout<<n*x<<endl;\
	\}\
	if(k==0)\{\
	    if(x<y)\{\
	        cout<<x*n<<endl;\
	    \}\
	    else\{\
	        cout<<y*n<<endl;\
	    \}\
	\}\
	else if(k<n)\{\
	    if(x>y)\{\
	       cout<<k*x+temp*y<<endl; \
	    \}\
	    if(x==y)\{\
	        cout<<n*x<<endl;\
	    \}\
	    else if(x<y)\{\
	        cout<<n*x<<endl;\
	    \}\
	\}\
	\}\
	return 0;\
\}\
}