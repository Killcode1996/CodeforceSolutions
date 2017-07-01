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
vector <int> g[101];
set < pair <int, int> > s;
int used[101],color[101],st[101];
void dfs (int v, int p) {
    used[v]=1;
    for (int i=0; i<g[v].size(); i++) {
        int x=g[v][i];
        if (used[x]==1) {
        	cout<<"No";
        	exit(0);
        }
        else
            dfs(g[v][i], v);
    }
}
int main() {
	int n,m,a,b;
	cin>>n>>m;
	for (int i=1; i<=m; i++) {
		cin>>a>>b;
		g[a].push_back(b);
	}
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			used[i]=0;
		}
		dfs(i, -1);
 
	}
	for (int i=1; i<=n; i++) {
		for (int j=0; j<g[i].size(); j++) {
			st[g[i][j]]++;
		} 
	}
	for (int i=1; i<=n; i++) {
		s.insert(make_pair(st[i],i));
	}
	cout<<"Yes"<<endl;
	while(!s.empty()) {
		int v=s.begin()->second;
		s.erase(s.begin());
		cout<<v<<" ";
		for (int i=0; i<g[v].size(); i++) {
			int t=g[v][i];
			s.erase(make_pair(st[t],t));
			st[t]--;
			s.insert(make_pair(st[t],t));
		}
	}
	return 0;
}