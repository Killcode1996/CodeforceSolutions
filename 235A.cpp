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
typedef unsigned long long ll;
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
bool isPrime(int n){
    if(n<=1)    return false;
    if(n<=3)    return true;
    if(!(n%2) or !(n%3))   return false;
    for(int i=5;i*i<=n;i+=6){
        if(!(n%i) or !(n%(i+2)))  return false;
    }
    return true;
}

ll lcm (ll a,ll b)
{
	ll ans= ll(a*b)/(__gcd(a,b));
	return ans;
}
int main()
{
	int n;
	cin>>n;
	if(n<=2){cout<<n; return 0; }
	if(n%2!=0){
	ll f=n;ll s=n-1; ll t=n-2;
	ll ans=lcm(f,s);
	ans=lcm(ans,t);
	cout<<ans; }
      else
      {  ll f=n-1,t=n-3; ll final=0,s;
      	for(int i=n;i>2;i=i-2)
      	{
      		s=i;
      		ll ans=lcm(f,s);
	       ans=lcm(ans,t);
	       final=max(ans,final);
      	}
      	cout<<final;
       
      }

}

