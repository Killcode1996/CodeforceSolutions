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
   int a[5][5];

int main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

   for(int i=1;i<=4;i++)
   {
    for(int j=1;j<=4;j++)cin>>a[i][j];
   }
bool flag=true;
   if(a[1][4])
   {
      for(int i=1;i<=3;i++)
      {
        if(a[1][i]==1)flag=false;

      }
      if(a[4][3]==1)flag=false;
      if(a[2][1]==1)flag=false;
      if(a[3][2]==1)flag=false;
   }


   if(a[2][4])
   {
      for(int i=1;i<=3;i++)
      {
        if(a[2][i]==1)flag=false;

      }
      if(a[1][3]==1)flag=false;
      if(a[3][1]==1)flag=false;
      if(a[4][2]==1)flag=false;
   }


   if(a[3][4])
   {
      for(int i=1;i<=3;i++)
      {
        if(a[3][i]==1)flag=false;

      }
      if(a[4][1]==1)flag=false;
      if(a[2][3]==1)flag=false;
      if(a[1][2]==1)flag=false;
   }


   if(a[4][4])
   {
      for(int i=1;i<=3;i++)
      {
        if(a[4][i]==1)flag=false;

      }
      if(a[3][3]==1)flag=false;
      if(a[1][1]==1)flag=false;
      if(a[2][2]==1)flag=false;
   }
   if(flag)cout<<"NO";
   else cout<<"YES";
}
