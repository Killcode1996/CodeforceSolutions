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
	double n,k;
	cin>>n>>k;
	double val=0.5;
	double ans=0.0;
	for(int i=0;i<n;i++){
		int temp; cin>>temp; ans=ans+temp;
	}
	int count=0;
	double per=(double)(ans/(double)n);
	int pt=per;
	double another=per-pt;
	cout<<another<<endl;
	if(per-pt>=val || pt>=k-1){cout<<0; return 0;}
	cout<<pt<<" "<<per<<endl;
	while(1)
	{
		count++;
		ans=ans+k;
		per=(double)(ans/(double)(n+count));
		 cout<<ans<<endl;
		 pt=per;
		cout<<pt<<" "<<per<<endl;
		if(per-pt>=val && pt>=k-1){cout<<count; return 0;}
	}
}
