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
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	bool flag=true;
	int a[26]={0};
	int b[26]={0};
	for(int i=0;i<s1.length();i++)
		a[s1[i]-65]++;
	for(int i=0;i<s2.length();i++)
		a[s2[i]-65]++;
	for(int i=0;i<s3.length();i++)
		b[s3[i]-65]++;
	for(int i=0;i<26;i++)
	{
		if(a[i]!=b[i])flag=false;
	}
	if(flag)cout<<"YES";
	else cout<<"NO";
}
