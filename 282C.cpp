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
	string a,b;
	cin>>a>>b;
	if(a.length()!=b.length()){cout<<"NO"; return 0;}
	if(a==b){cout<<"YES";return 0;}
	if(a.length()==1 && a[0]!=b[0]){cout<<"NO"; return 0;}
	if(a.length()==1 && a[0]==b[0]){cout<<"YES"; return 0;}
	else{
		int count=0; int count1=0;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='1')count++;
		}
		for(int i=0;i<a.length();i++)
		{
			if(b[i]=='1')count1++;
		}
		if(count==0 || count1==0)cout<<"NO";
		else cout<<"YES";
	}
}
