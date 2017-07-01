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
ll n;
bool check(ll val,ll p)
{
	//ll qr=p+1;
   ll tofill=(val-p-1);
   if(tofill<0)tofill=0;
   ll totalfill=tofill*p;

   ll firstpart=(val*(val+1))/2;
   ll secondpart=(p*(p+1))/2;
  ll totalremove=firstpart-secondpart;
  if(totalremove<=0)totalremove=val;
   ll final=n-totalremove+totalfill;
 //cout<<val<<" "<<" "<<tofill<<" "<<firstpart<<" "<<secondpart<<" "<<totalfill<<endl<<totalremove<<" "<<final<<endl; 
   if(final>0)return true;
   else return false;
}
int main()
{
	ll k;
	cin>>n>>k;
	ll l=1; ll r=n;
	while(l<r)
	{
		ll mid=(l+r)/2;
		//cout<<l<<" ll  "<<r<<endl;
		//cout<<mid<<endl;
		if(check(mid,k)){
			l=mid+1;
		}
		else {r=mid;}
	}
	cout<<l;
}
