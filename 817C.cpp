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


bool check(ll mid,ll sum)
{
    ll s=0;
    ll num=mid;
    while(num>0)
    {
        s+=num%10;
        num/=10;
    }
    //cout<<" came for :: "<<mid<<" sum = "<<s<<endl;
    if(mid-s>=sum)return true;
    else return false;
}

int main()
{
  ll n,s;
  cin>>n>>s;
  ll lo=1,high=n;
  ll mid=(lo+high)/2;
  ll ren=-1;
  for(int i=0;i<100;i++)
  {

    mid=(lo+high)/2;
  //      cout<<lo<<" "<<high<<" "<<mid<<endl;
    if(check(mid,s))
    {
        ren=mid;
        high=mid;

    }
    else{
         lo=mid+1;
    }
  }
 // cout<<ren<<endl;
  if(ren==-1)cout<<0;
  else{
    cout<<max((ll)0,n-ren)+1;
  }
}
