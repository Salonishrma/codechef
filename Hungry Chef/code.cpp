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
	int x,y,n,r;\
	cin>>x>>y>>n>>r;\
	int ans=((r-x*n)/(y-x));\
	if(r/x<n)\{\
	    cout<<"-1"<<endl;\
	\}\
	else if(r/y>=n)\{\
	    cout<<"0 ";\
	    cout<<n<<endl;\
	\}\
	else\{\
	    if(y>0)\{\
	        cout<<n-ans<<" ";\
	        cout<<ans<<endl;\
	    \}\
	else\{\
	    cout<<n<<" 0"<<endl;\
	\}\
	\}\
	\}\
	return 0;\
\}\
}