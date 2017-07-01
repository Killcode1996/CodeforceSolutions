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
	int n;
	cin>>n;
	//std::vector< int , int > v;
	int mn1=INT_MAX;
	int mn2=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		mn1=min(mn1,y);
		mn2=max(mn2,x);

	}
	int m;
	cin>>m;
	int mn3=INT_MIN;
	int mn4=INT_MAX;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		mn3=max(mn3,x);
		mn4=min(mn4,y);
	}
	int ans1=mn3-mn1;
	int ans2=mn2-mn4;
	int ans=max(ans1,ans2);
	if(ans<0)cout<<0;
	else cout<<ans;
	//cout<<mn2-mn1;
}
