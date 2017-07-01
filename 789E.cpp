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

std::vector< int > ad;
std::vector< int > di;
int vis[1005];
bool flag[1005];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{ int temp; si(temp); 
		flag[temp]=true;
	}
	for(int i=0;i<1001;i++)vis[i]=-1;
		queue < int > q;
	for(int i=0;i<1001;i++)
	{
		if(flag[i]){ di.push_back(i); q.push(i); 
			vis[i]=1;
			ad.push_back(i-n);
             }
	}
	// for(int i=0;i<ad.size();i++)cout<<ad[i]<<" ";
	// 	cout<<endl;
	//cout<<n<<endl;
	bool out=false;
	while(!q.empty())
	{
		int from=q.front(); 
		q.pop();

		for(int i=0;i<ad.size();i++)
		{
			int to=ad[i];
			int tot=from+to;
			//cout<<from<<" "<<to<<" "<<tot<<endl;
			if(vis[tot]==-1 && (tot>=0 && tot<=1000 )) {
				//cout<<from<<" "<<vis[to]<<endl;
				vis[tot]=vis[from]+1;

				q.push(tot);
			}
			if(tot==n){ out=true; break; }
		}
		if(out)break;
	}
	cout<<vis[n];
}
