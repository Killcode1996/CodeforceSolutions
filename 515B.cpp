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
	int n,m;
	cin>>n>>m;
	bool boy[105]={0};
	bool girl[105]={0};
	int temp;
	cin>>temp;
	for(int i=0;i<temp;i++){
		int vp; cin>>vp; boy[vp]=1;
	}


	int temp1;
	cin>>temp1;
	for(int i=0;i<temp1;i++){
		int vp; cin>>vp; girl[vp]=1;
	}

  for(int st=0;st<100005;st++)
  {
  	int b=st%n;
  	int g=st%m;
  	if(boy[b] || girl[g]){boy[b]=1; girl[g]=1;}
  }
  //cout<<"Ca "<<endl;
  bool ans1=true;
  bool ans2=true;
  for(int i=0;i<n;i++)
  {
  	if(!boy[i])ans1=false;
  }

  for(int i=0;i<m;i++)
  {
  	if(!girl[i])ans2=false;
  }
  if(ans1 && ans2)cout<<"Yes";
  else cout<<"No";
}
