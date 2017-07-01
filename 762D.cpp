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
ll ans=0;
//--------------**************---------------------
ll dist[5][100005];
bool visited[5][100005];
ll a[5][100005];
int n;
bool traverse(int x,int y)
{
	if(x<1 || y<1 || x>3 || y>n)return false;
    if(x==3 && y==n)return false;
    visited[x][y]=false;
    if(visited[x+1][y]==false ){ visited[x+1][y]=true; dist[x+1][y]=max(dist[x+1][y],a[x][y]+a[x+1][y]);  traverse(x+1,y);}
    if(visited[x-1][y]==false ){ visited[x-1][y]=true; dist[x-1][y]=max(dist[x-1][y],a[x][y]+a[x-1][y]);  traverse(x-1,y);}
    if(visited[x][y+1]==false ){ visited[x][y+1]=true; dist[x][y+1]=max(dist[x][y+1],a[x][y]+a[x][y+1]);  traverse(x,y+1);}
    if(visited[x][y-1]==false ){ visited[x][y-1]=true; dist[x][y-1]=max(dist[x][y-1],a[x][y]+a[x][y-1]);  traverse(x,y-1);}
    return false;
}

int main()
{
	
	cin>>n;
	
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	traverse(1,1);
	cout<<dist[3][n];
}
