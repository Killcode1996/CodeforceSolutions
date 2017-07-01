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

int a[100005];

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
		int l=1,r=1;
	int flag[100005]={0};
	int st=0;
	while(r<=n)
	{
		int temp=a[r];
		if(flag[temp]==0)st++;
		if(st==k)break;
		flag[temp]++;
		r++;
		//if(a[l]==a[r])l++;
	}
	if(st!=k){cout<<"-1 -1"; return 0;}
	while(1){
		if(flag[a[l]]==0)break;
		if(flag[a[l]]==1)break;
		else if(flag[a[l]]!=1){flag[a[l]]--; l++;}
	}

	cout<<l<<" "<<r;
}
