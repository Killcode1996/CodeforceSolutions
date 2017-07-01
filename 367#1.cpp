#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	cin>>a>>b;
	int n;
	cin>>n;
	double pre=10000000000;
	while(n--)
	{
		double x,y,v;
		cin>>x>>y>>v;
		double dis=sqrt(pow(abs(x-a),2)+pow(abs(y-b),2));
		double tim=(double)dis/v;
		if(tim<pre)pre=tim;
	}
	cout<<fixed;
	cout<<setprecision(20)<<pre;
}