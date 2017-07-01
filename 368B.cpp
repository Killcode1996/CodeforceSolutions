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
	int n,m;
	cin>>n>>m;
	int a[n];
	int dp[100001]={0};
	int hasUsed[100001]={0};
	for(int i=0;i<n;i++)cin>>a[i];
		for(int i=n-1;i>=0;i--)
		{
			if(hasUsed[a[i]]==0){dp[i]=dp[i+1]+1; hasUsed[a[i]]=1;}
			else dp[i]=dp[i+1];
		//	cout<<dp[i]<<endl;
		}
		while(m--)
		{
			int a;
			cin>>a;
			cout<<dp[a-1]<<endl;
		}



}
