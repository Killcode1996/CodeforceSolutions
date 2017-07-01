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
ll zeros;
ll ones;

int main()
{
	ll n,c1,c2;
	cin>>n>>c1>>c2;
	string s;
	cin>>s;
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')zeros++;
		else ones++;
	}
	ll ans=0;
	if(zeros<=ones)
	{
		ans=ans+c1+(c2*(pow(zeros,2)));
		ones=ones-zeros;
		ones=ceil(ones/2.0);
		cout<<ans<<endl;
		cout<<ones<<" "<<zeros<<endl;
		if(ones>0)
		ans=ans+c1+(c2*(pow(ones,2)));
	}
	else{
		ans=ans+c1*(c2*(pow(ones-2,2)));
		zeros=zeros-ones+1;
		zeros=ceil(zeros/2.0);
		cout<<ones<<" "<<zeros<<endl;
		if(zeros>0)
			ans=ans+c1*(c2*(pow(zeros-1,2)));
	}
	cout<<ans;
}
