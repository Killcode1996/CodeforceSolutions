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

struct node
{
	ll p,l,diff,bef,aft;
}q[200005];




bool cmp(node x, node y) {
	if(x.diff != y.diff) {
		return x.diff > y.diff;
	}
	return x.l>y.l;
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>q[i].p;
		//q[i].p=q[i].p;
		cin>>q[i].l;
		
		q[i].bef=min(q[i].p,q[i].l);
		q[i].aft=min(q[i].p*2,q[i].l);
		q[i].diff=q[i].aft-q[i].bef;
	}
	sort(q,q+n,cmp);
	int count=0;
	ll ans=0;
   //for(int i=0;i<n;i++)cout<<q[i].p<<" "<<q[i].l<<endl;
	for(int i=0;i<n;i++)
	{
		if(q[i].l==0 || q[i].p==0)continue;
		if( count<m )   {
			//cout<<" g "<<q[i].p<<" "<<q[i].l<<endl;
			// val=2*q[i].p;

			ans=ans+min(2*q[i].p,q[i].l);
			//cout<<q[i].p<<" "<<ans<<endl;
			count++;
		}
		else{
			ans=ans+min(q[i].p,q[i].l);
		}
		
	}

cout<<ans;
}
