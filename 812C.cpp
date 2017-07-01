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
ll a[100005];
int n;
  ll val;
  ll ans;
bool check(int index,ll total)
{
     val=0;
      ll sum[n];
      for(int i=0;i<n;i++)sum[i]=0;
    int indx=0;
    for(int i=0;i<n;i++)
    {
        ll p=(i+1)*index*1LL;
        sum[i]=a[i]+p;
    }
    sort(sum,sum+n);
    for(int i=0;i<n;i++)cout<<sum[i]<<" ";
        cout<<endl;
   cout<<"t ottal "<<total<<endl;
    for(int i=0;i<index;i++)
    {
                val+=sum[i];
    }
 //   cout<<val<<" "<<endl;
    if(val>total)return true;
    else return false;
}
int main()
{
  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);


ll tot;
cin>>n>>tot;
for(int i=0;i<n;i++)cin>>a[i];
int l=0,r=100;
int mid=(l+r)/2;
for(int i=0;i<20;i++)
{
    mid=(l+r)/2;
    cout<<" l :: "<<l<<" :: "<<r<<" :: "<<mid<<endl;
    if(check(mid,tot))
    {
      r=mid-1;
      mid=r;
    }
    else{
      l=mid+1;
    }

}
ll ans=0;
//cout<<tot<<endl;
// for(int i=0;i<mid;i++){
//   ans=ans+sum[i];
// }
cout<<mid<<" "<<ans;
}