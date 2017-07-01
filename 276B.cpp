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

bool check(string s)
{
	string rev="";
	for(int i=s.length()-1;i>=0;i--)rev+=s[i];
		if(rev==s)return true;
	else return false;
}

int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int a[26]={0};
//	sort(s.begin(),s.end());
	for(int i=0;i<s.length();i++)a[s[i]-97]++;
	int ans=0;
	while(1)
		{   int count=0;
			ans++;
			sort(a,a+26);
			for(int i=0;i<26;i++){
				if(a[i]%2==1)count++;
			}
			a[25]=a[25]-1;
			if(count==0 || count==1)break;
		}
		if(ans%2!=0)cout<<"First";
		else cout<<"Second";

}
