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

std::vector< int > adj[1000005];
bool vis[1000005];
int has[1000005];

void dfs(int st)
{
	vis[st]=true;
	for(int i=0;i<adj[st].size();i++)
	{
		if(!vis[adj[st][i]])dfs(adj[st][i]);
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	ll loop=0;
     for(int  i=0;i<m;i++){
     	int x,y;
     	si(x); si(y);
     	 adj[x].pb(y);
     	if(x==y){loop++; has[x]++; }
     	else {
     	     	adj[y].pb(x);}
     }
     ll strong=0;
     for(int i=1;i<=n;i++)
     {
     	if(!vis[i] && adj[i].size()>0){
     		strong++;
     		if(strong>1)break;
     		dfs(i);
     	}
     }
     if(strong>1 || m<2 ){cout<<0; return 0;}
     ll ans=ll(loop*(loop-1)/2);
     ll pi=m-loop;
     ans=ans+ll(loop*pi);
   //  cout<<ans<<endl;
     for(int i=1;i<=n;i++)
     {
     	//if(adj[i].size()>0){
     		ll edges=adj[i].size();
     		if(has[i]>0)edges--;
     		ans=ans+edges*(edges-1)/2;
     		//cout<<ans<<endl;
     	//}
     }
     cout<<ans;
}
