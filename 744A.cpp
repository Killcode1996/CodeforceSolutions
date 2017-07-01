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

int arr[200005];
int ans;
int main()
{ 
	set <string> se;
	string s;
	cin>>s;
	int len=s.length();
	string storage[len];
	int st=0;
	int poi=len;
	while(len--)
	{
	string newi="";
	newi+=s[poi-1];
	for(int i=0;i<poi-1;i++)
		newi+=s[i];
	//if(se.insert(newi))ans++;

	bool flag=true;
	for(int i=0;i<st;i++)
	{
		if(newi==storage[i])flag=false;
	}
	if(flag){ans++; storage[st]=newi; st++; }
  // cout<<newi<<endl;
	s=newi;
	}
	//for(int i=0;i<s.length();i++)cout<<storage[i]<<endl;
	cout<<ans;
}
