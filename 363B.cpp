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
	int n,k;
	cin>>n>>k;
	int a[n];
	for (int i = 0; i < (n); i++)
	{
		cin>>a[i];
	}
	int dp[150001]={0};
	dp[0]=a[0];
	int presum=a[0];
	 for(int i=1;i<n;i++)dp[i]=a[i]+dp[i-1];
	// 	for(int i=0;i<n;i++)cout<<dp[i]<<" ";
	// 	cout<<endl;
	for(int i=1;i<n;i++)
	{
       a[i]=dp[i];
       if(i>=k){
       	a[i]-=dp[i-k];
       }
   }
   // for(int i=1;i<n;i++)dp[i]=a[i]+dp[i-1];
		//for(int i=0;i<n;i++)cout<<a[i]<<" ";
	 //	cout<<endl;
       int mn=INF;
       int index=0;
       for(int i=k-1;i<n;i++)
       {
       	if(a[i]<mn){mn=a[i]; index=i+1; index=index-k+1;}
       }

	
	cout<<index;
}
