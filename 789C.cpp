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

ll maxSubArraySum(ll a[], ll size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main(){
    ll n;
    cin>>n;
    ll a[n];
    ll b[n-1],c[n-1];
    for (int i = 0; i < n; ++i)cin>>a[i];
    for (int i = 0; i < n-1; ++i)
    {
       b[i] = abs(a[i+1]-a[i]) * pow(-1,i);
    }
    for (int i = 0; i < n-1; ++i)
    {
       c[i] = abs(a[i+1]-a[i]) * pow(-1,i+1);
    }
    ll m = maxSubArraySum(b,n-1);
    m = max(m,maxSubArraySum(c,n-1));
    cout<<m;
}