#include<bits/stdc++.h>
using namespace std;
#define pi pair < int,int >
#define pis pair < int, string >
#define pir pair< pi , pis >
#define FF first
typedef long long ll ;
#define SS second
int main()
{
    ll n;
	cin>>n;
	std::vector<pi> v(n);
	for(ll i=0;i<n;i++)
	{    
		cin>>v[i].FF;
		v[i].SS=i+1;

	}
	std:sort(v.begin(),v.end());
	ll a[100000]={0};
	int st=0;
	for (int i = 0; i < n; i++)
	{
		a[st]=v[i].SS; st++;
	}
	int j=0;
	for (int i = 0,j=st-1; i < st/2; i++,j--)
	{
		cout<<a[i]<<" "<<a[j]<<endl;
	}

}