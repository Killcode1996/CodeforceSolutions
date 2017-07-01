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


int main() {
	long double n, h;
	cin >> n >> h;
	cout<<fixed;
	long double pip=h/(sqrt(n));
	//printf("%.6llf ",pip);
	cout<<setprecision(6)<< h/(sqrt(n))<<" ";
	h = h / sqrt(n);
	for(double i=1;i<n-1;i++){
		double pl=(double)sqrt(((i+1)/i));
		//cout<<pl<<" das d"<<endl;
		h *= pl;
	//	printf("%.6llf ",h);
		cout<<setprecision(6)<< h<<" ";
	}
	return 0;
}