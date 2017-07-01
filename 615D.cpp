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
const int MOD=1e7;

//--------------**************---------------------

set < ll > se;

int main()
{
   int n;
   cin>>n;
   ll a[200005];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];  se.insert(a[i]);
   }
   for(int i=0;i<n;i++)
   {
   	for(int j=i+1;j<n;j++)
   	{
   		if(i==j)continue;
   		else{
   			ll temp=(a[i]*a[j])%MOD;
   			se.insert(temp);
   		}
   	}
   }
    ll num=1;
     for(int i=0;i<n;i++)
     {
     	num=(num*a[i])%MOD;
     }
     se.insert(num);
   ll ans=1;
   for(std::set<ll>::iterator it=se.begin(); it!=se.end(); ++it)
     //cout<<" "<<*it;
   ans=(ans*(*it))%MOD;

    cout<<(ans)%MOD;
}
