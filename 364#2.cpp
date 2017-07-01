#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
		ll a[100005]={0}; ll b[100005]={0};
		ll counta=n,countb=n;
	while(m--)
	{   
		ll p,q;
		cin>>p>>q;
		if(a[p]==0)counta--;
		if(b[q]==0)countb--;
		 a[p]=1; b[q]=1; 
		 ll ans=counta*countb;
	cout<<ans<<endl;

		
	}
}