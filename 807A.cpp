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

ll a[500005];
ll b[500005];

int main()
{
	int n;
	cin>>n;
	bool flag=false;
	int pre=INT_MAX;
	bool ft=false;
	for(int i=0;i<n;i++)
      {
      	int temp,temp1;
      	cin>>temp>>temp1;
      //cout<<temp<<" "<<temp1<<endl;
      	if(temp!=temp1)flag=true;
      	a[i]=temp;
      b[i]=temp1;
      if(pre<temp1)
      	ft=true;
      pre=temp1;
      }
      cout<<ft<<endl;
      if(flag){cout<<"rated"; return 0; }
      bool ni=false;
      for(int i=0;i<n;i++)
      {
      	for(int j=i+1;j<n;j++)
      	{
      		if(a[i]<a[j])ni=true;
      	}
      }
      if(ni){cout<<"unrated"; return 0;}
      cout<<"maybe";
}
