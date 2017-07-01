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


int main(){
 
 cout<<ceil(50/21)<<endl;
	int n,t,d,k,fir,tot=0;
 
	cin >> n >> t >> k >> d;
 
	fir=((n+k-1)/k)*t;
 
	int sir=0;
 
	while(sir<d && tot<n){
 
		if(sir+t>d) break;
 
		tot+=k;
		sir+=t;
	}
 
	if(tot>=n) cout << "NO\n";
	else{
 
		int c=d%t;
		sir=d+1;
 
		while(1){
 
			if(sir%t==0) tot+=k;
			if(sir%t==c) tot+=k;
 
			if(tot>=n) break;
 
			sir++;
		}
 
		//cout << fir << " " << sir << endl;
 
		if(fir<=sir) cout << "NO\n";
		else cout << "YES\n";
	}
 
	return 0;
}
