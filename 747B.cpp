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

char A='A';
char G='G';
char C='C';
char T='T';
int main()
{  int n; si(n);
	string s;
	cin>>s;
	//cout<<s.length()<<endl;
	int a=0;
	int g=0;
	int c=0;
	int t=0;
	int count[26]={0};
	int q=0;
	for(int i=0;i<s.length();i++)
		{   if(s[i]=='?'){q++; continue; }
	        if(s[i]=='A'){a++; continue; }
	        if(s[i]=='G'){g++; continue; }
	        if(s[i]=='C'){c++; continue; }
	        if(s[i]=='T'){t++; continue; }
       }			
			int mx=-1;
			for(int i=0;i<n;i++)mx=max(mx,max(a,max(c,max(g,t))));
			int more=	q-((4*mx)-(a+c+g+t));
		//cout<<more<<endl;
		if(more<0 && more%4!=0)cout<<"===";
		else{
			mx=mx+(more/4);
			for(int i=0;i<mx;i++)cout<<"A";
				for(int i=0;i<mx;i++)cout<<"G";
					for(int i=0;i<mx;i++)cout<<"C";
						for(int i=0;i<mx;i++)cout<<"T";

		}

}
