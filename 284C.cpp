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
	int t;
	si(t);
	while(t--)
	{
	    int n;
	    si(n);
          int a[n];
          for(int i=0;i<n;i++)si(a[i]);
          	int count=0;int ans=0;
          for(int i=n-1;i>=0;i--)
          {
          	if(a[i]==0)count++;
          	if(a[i]==1)ans+=count;
          }
          int count1=0,ans1=0;
           for(int i=n-1;i>=0;i--)
          {
          	if(a[i]==1)count1++;
          	if(a[i]==0)ans1+=count1;
          }
          cout<<min(ans,ans1);
	}
}