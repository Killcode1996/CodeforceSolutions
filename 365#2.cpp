#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,c;
	cin>>n>>c;
	bool ar[n][n]={false};
	ll a[100002]={0};
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	ll ans=0;
	string s[100002]="";
	for(ll i=1;i<=n;i++)
	{
		ll j=i+1;
		if(i==n)j=1;
		ans=ans+(a[i]*a[j]);
        ar[i][j]=true;
        ar[j][i]=true;
    }
    while(c--)
    { ll temp; cin>>temp;
    for(ll i=1;i<=n;i++)
    {
    	if(i==temp)continue;
    	if(ar[i][temp]==false) {
    		ans=ans+(a[i]*a[temp]);
    		ar[i][temp]=true;
    		ar[temp][i]=true;
                   }

    }
}

cout<<ans;
}