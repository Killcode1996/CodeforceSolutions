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
int n,m;
int dp[20][200];
string s[200];
int last[3][200];


    int lastIndex;
int solve(int flor,int side)
{
    if(flor==lastIndex) return last[side][flor];
   return 1+min(2*last[side][flor]+solve(flor+1,side),m+1+solve(flor+1,1-side));
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
         cin>>s[n-1-i];
    }

    for(int i=0;i<n;i++)
    {
        int cnt=-1;
        for(int j=0;j<m+2;j++)
        {
               if(s[i][j]=='1')cnt=j;
        }
        if(cnt==-1)
            last[0][i]=0;
        else
        last[0][i]=cnt;
        cnt=-1;
        for(int j=m+2-1;j>=0;j--)
        {
               if(s[i][j]=='1')cnt=j;
        }
        if(cnt==-1)
            last[1][i]=0;
        else
        last[1][i]=m+1-cnt;
    //cout<<i<<" :: "<<" from left :: "<<last[0][i]<<"  from right :: "<<last[1][i]<<endl;
    }

 lastIndex=-1;
   bool flag=false;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<m+2;j++)
        {
            if(s[i][j]=='1'){lastIndex=i; flag=true; break;}
        }
        if(flag)break;
    }
    if(lastIndex==-1){cout<<0; return 0; }
  //  cout<<lastIndex<<endl;
    cout<<solve(0,0);


}
