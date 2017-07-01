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
typedef pair<long long int,long long int> pii;
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


int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	std::vector< pii > v;
	ll total=0;
	for(int i=0;i<n;i++)
	{
      ll a,b;
      cin>>a>>b;
      v.push_back(make_pair(b,a));
      total+=a;
	}
	//cout<<"total  "<<total<<endl;
	sort(v.begin(),v.end());
	ll ans=0;
	ll upto=n*k;
	ll rem=upto-total;
	//cout<<"upto  "<<upto<<endl;
	//cout<<"rem   "<<rem<<endl;
	if(rem<=0){cout<<0; return 0;}
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<v[i].fe<<" "<<v[i].se<<endl;
	// }
	for(int i=0;i<n;i++)
	{
		ll p=m-v[i].se;
		if(p<=rem){
			ans=ans+ll(p*v[i].fe);
			rem=rem-p;
		}
		else{
			ans=ans+ll(rem*v[i].fe);
			break;
		}
	}

	cout<<ans;
}
