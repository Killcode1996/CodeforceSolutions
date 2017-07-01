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
bool goal[1000];
ll dis[5000005];
bool vis[500005];
void go(ll num)
{
	ll s=num;
	ll i=(s/50)%475;
	for(int j=0;j<25;j++)
	{
		i=(((i*96)%475)+42)%475;
		goal[26+i]=1;
	}

}

bool check(int p)
{
	if(goal[p]==true)return true;
	else return false;
}
int main()
{
	ll p,x,y,x1;
	cin>>p>>x>>y;

	x1=x;

	while(x>y)x=x-50;
	if(x<y)x=x+50;
	//cout<<x<<endl;
	for(int i=0;;i++)
	{
		ll num=x;
		go(num);
		if(check(p))
		{
			 if(num<=x1)
			 {
			 	cout<<0; return 0;
			 }
			 else{
			   ll temp=num-x1;
			 //	cout<<temp<<endl;
			 	ll ans=temp/100;
			 	if(temp%100==0)
			 	{
			 		cout<<ans; return 0;
			 	}
			 	else{
			 		cout<<ans+1; return 0;
			 	}

			 }
		}
		x=x+50;

	}
	 
}
