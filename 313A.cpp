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
	string s;
	cin>>s;
	if(s[0]!='-')cout<<s;
	else
	{  string ans="";
       //  ans+=s[0];
               for(int i=0;i<s.length()-2;i++)ans+=s[i];
		int l=s.length();
	//int p=l-1;
	//cout<<ans<<endl;
	if(s[l-1]>s[l-2])ans+=s[l-2];
	else ans+=s[l-1];
	bool flag=false;
	for(int i=1;i<ans.length();i++)
	{
		if(ans[i]!='0')flag=true;
	}
	if(flag==true)
	cout<<ans;
else {for(int i=1;i<ans.length();i++)cout<<ans[i];
	}
}
}
