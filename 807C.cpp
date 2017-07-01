#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define key pair<ll,ll>
#define vii vector<pair<int,int> >
#define vi vector<int>
#define vvi vector<vector<int> >
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define nu 100001
#define mod 1000000007

 ll G;
ll gcd(ll a, ll b, ll & x, ll & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	ll val1=0, val2=0;
	ll d = gcd (b%a, a, val1, val2);
	//cout<<d<<endl;
	x = val2 - (b / a) * val1;
	//cout<<x<<endl;
	y = val1;
	return d;
}
 
bool solve(ll a, ll b, ll c, ll & x0, ll & y0) {
	G= gcd (abs(a), abs(b), x0, y0);
	//cout<<a<<" "<<b<<" "<<c<<" "<<x0<<" "<<y0<<endl;
	//cout<<"gcd :: "<<G<<endl;
	if (c % G != 0)
		return false;
	x0 *= c / G;
	y0 *= c / G;
	if (a < 0)   x0 *= -1;
	if (b < 0)   y0 *= -1;
	return true;
}
 
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll x, y, p, q;
		cin >> x >> y >> p >> q;
		ll a = p - q;
		ll b = p;
		ll c = x*q - y*p;
		ll A=0, B=0;
		if(!solve(a, b, c, A, B)) {
			cout << -1 << '\n';
			continue;
		}
		a /= G;
		b /= G;
		ll L;
		if(a == 0) L = (-A + b - 1) / b;
		else if(b == 0) L = B / a;
		else L = max((-A + b - 1) / b, B / a);
		if(a == b) cout << A + B << '\n';
		else cout << A + B + L * (b - a) << '\n';
	}
}.