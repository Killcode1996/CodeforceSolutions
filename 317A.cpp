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


int main()
{
	ll a,b,m;
	cin>>a>>b>>m;
	ll te=min(a,b);
	ll tt=max(a,b);
	a=te;
	b=tt;
	if(a>=m ||  b>=m ){cout<<0;  return 0;}
	if(a<=0 && b<=0 )
    {
    	if(a>=m || b>=m){cout<<0; return 0;}
    	cout<<-1; return 0;
    }

	ll j=0;
	j=j+((abs(a)+(b-1))/b);
		a=a+(abs(b)*j);
		//cout<<j<<" :: "<<a<<endl;
	// ll mn=min(a,b);
	// ll mx=max(a,b);
		ll i=0;
		 te=min(a,b);
   tt=max(a,b);
	a=te;
	b=tt;
	for( i=0;i<100000;i++)
	{
      if(a>=m || b>=m)break;
       //cout<<"before :: "<<a<<" "<<b<<endl;
      a=a+b;
      // cout<<"after :: "<<a<<" "<<b<<endl;
      ll temp=min(a,b);
      ll temp1=max(a,b);
      b=temp1;
       a=temp;
    // cout<<a<<" "<<b<<endl;

	}
	ll num=max(a,b);
	if(i==100000 || num<m)cout<<-1;
	else cout<<i+j;
}
