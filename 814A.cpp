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
int a[10005];
int b[10005];

int main()
{
   int n,m;
   cin>>n>>m;

   int fre[10005]={0};
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        b[i]=temp;
    }
    sort(b,b+m); int k=m-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=b[k]; k--;
        }
    }
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>=a[i+1]){flag=true; break;}
    }
    if(flag)cout<<"Yes";
    else
    cout<<"No";
}
