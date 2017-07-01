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

bool visited[100005];
std::vector<int> adj[100005];
int lvl[100005];
void bfs(int st)
{
lvl[st]=1;
queue<int> q;
q.push(st);
visited[st]=true;
while(!q.empty()) {
    int p=q.front();
    q.pop();

    for(int i=0;i<adj[p].size();i++)
    {
    	if(!visited[adj[p][i]])
    	{
    	lvl[adj[p][i]]=lvl[p]+1;
    //	cout<<lvl[adj[p][i]]<<endl;
    	visited[adj[p][i]]=true;
    	q.push(adj[p][i]);
        }
    }
}
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int temp;
		cin>>temp;
		if(temp!=-1)
		{
         adj[i].pb(temp);
         adj[temp].pb(i);
         //cout<<"adding"<<endl;
          }
		}
		bfs(1);
		int mx=-1;
for(int i=0;i<2005;i++)mx=max(mx,lvl[i]);
	cout<<mx;
}
