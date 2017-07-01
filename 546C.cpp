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
	int n;
	cin>>n;
	queue <int> q1;
	queue <int> q2;
	int p1;
	cin>>p1; 
	for(int i=0;i<p1;i++){int temp; cin>>temp; q1.push(temp); }
		int p2;cin>>p2;
	int ans=0;
	for(int i=0;i<p2;i++){int temp; cin>>temp; q2.push(temp); }
		bool flag1=false; bool flag2=false;
		while(!q1.empty() or !q2.empty())
		{
			if(q1.size()==0){flag1=true; break;}
			if(q2.size()==0){flag2=true; break;}
			int first = q1.front();
			int second = q2.front();
			//cout<<first<<" "<<second<<endl;
			q1.pop();
			q2.pop();
			ans++;
			if(ans>1000){cout<<-1; return 0;}
			if(first>second)
			{
				q1.push(second);
				q1.push(first);
			}
			else{
				q2.push(first);
				q2.push(second);
			}
		}
		if(flag1)
		cout<<ans<<" "<<2;
	    else
	    	cout<<ans<<" "<<1;

}
