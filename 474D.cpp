//--------------**************---------------------
/* 
 #        "    ""#    ""#                      #        
 #   m  mmm      #      #     mmm    mmm    mmm#   mmm  
 # m"     #      #      #    #"  "  #" "#  #" "#  #"  # 
 #"#      #      #      #    #      #   #  #   #  #"""" 
 #  "m  mm#mm    "mm    "mm  "#mm"  "#m#"  "#m##  "#mm"  */


#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef pair<int,int> pii;
typedef long long ll;
typedef double ld;
typedef vector<int> vi;
#define fi first
#define se second
#define fe first
#define SZ 666666
#define si(n) scanf("%d",&n);
#define sl(n) scanf("%ld",&n);
#define pi(n) printf("%d\n",n);
#define pl(n) printf("%ld\n",n);
#define pf(n) printf("%f\n",n);
#define FILL(a,b) memset(a,0,sizeof(b));
#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,a,b) for(int i=1;i<=b;i++)
const int INF=1e9+5;
const int MOD=1000000007;

//--------------**************---------------------


	ll a[500005];
int main()
{
	ll t,k;
	cin>>t>>k;
	a[0]=1;
	for(ll i=1;i<=100000;i++)
	{
		a[i]=a[i-1];
		if(i>=k)a[i]=(a[i]+a[i-k])%MOD;

	}
	for(ll i=1;i<=100000;i++)a[i]=(a[i]+a[i-1])%MOD;
		for(ll i=0;i<t;i++)
{
	ll l,r;
	cin>>l>>r;
	cout<<((a[r]-a[l-1])%MOD+MOD)%MOD<<endl;
}

}