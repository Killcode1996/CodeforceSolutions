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
	ll a[3]={0};
	ll n;
	cin>>n>>a[0]>>a[1]>>a[2];
	//sort(a,a+3);
	if(n%4==0){cout<<0; return 0;}
	ll temp=n%4;
	ll temp1=4-temp;
	// cout<<temp1<<endl;
   switch(temp1)
   {
   	case 1:
   	{ ll first=3*a[2]; ll second=a[2]+a[1]; cout<<min(first,min(second,a[0])); break;}
   	case 2:
   	{
   		ll first=2*a[0]; ll second=2*a[2];
   		cout<<min(first,min(second,a[1])); break;
   	}
   	case 3:
   	{
   		ll first=3*a[0];
   		ll second=a[0]+a[1];
   	    cout<<min(first,min(second,a[2])); break;
   	}
   }
}
