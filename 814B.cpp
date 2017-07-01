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
int a[100005];
int b[100005];
int result[100005];
int fre[10005];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    std::vector<int> li;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i]){
          result[i]=a[i];
          fre[a[i]]=1;
        }
        else{
            li.pb(i);
        }
    }
    if(li.size()==1)
    {
        int temp=li[0];
        int val;
        for(int i=1;i<=n;i++)
        {
            if(fre[i]==0){val=i; break;}
        }
        result[temp]=val; 
        for(int i=0;i<n;i++)cout<<result[i]<<" ";
            return 0;
    }
    else{
        int temp1=li[0];
        int temp2=li[1];
        int val1,val2;
        for(int i=1;i<=n;i++)
        {
            if(fre[i]==0)
                {
               result[temp1]=i; val1=i; fre[i]=1; break;
                }
        }

        for(int i=1;i<=n;i++)
        {
            if(fre[i]==0)
                {
               result[temp2]=i; val2=i; fre[i]=1; break;
                }
        }
        int cnt=0;
         for(int i=0;i<n;i++){
           if(result[i]!=a[i])cnt++; 
        }

         for(int i=0;i<n;i++){
           if(result[i]!=b[i])cnt++; 
        }
        if(cnt==2)
        {
            for(int i=0;i<n;i++)cout<<result[i]<<" "; return 0;
        }
         result[temp2]=val1;
         result[temp1]=val2;
        for(int i=0;i<n;i++)cout<<result[i]<<" "; return 0;
    }
}

