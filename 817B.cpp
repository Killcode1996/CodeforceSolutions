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


ll fac(ll num)
{
    ll ans=1;
    for(int i=1;i<=num;i++)
        ans=(ans*i)%MOD;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    ll a[n];
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    //     cout<<endl;
    sort(a,a+n);
  //  cout<<"e e"<<endl;
   ll ans=a[0]*a[1]*a[2];
   ll ano=a[0]*a[1];
  // cout<<ans<<" "<<ano<<endl;
    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    //     cout<<endl;
   for(int i=2;i<n;i++)
   {
    ll temp=ano;
    temp=temp*a[i];
    //cout<<"temp  "<<temp<<endl;
    if(temp==ans)cnt++;
    else break;

   }
  // cout<<" coutn "<<cnt<<endl;
   ll num=2+cnt;
 //  ll fir=fac(num);
   //ll sec=6;
   //ll val=num-3;
   //ll thir=fac(val);
  // cout<<fir<<" "<<sec<<" "<<thir<<endl;
  // ll anot=sec*thir;
   if(a[2]==a[1] && a[1]==a[0])
    {
        ll tt=num*(num-1)*(num-2);
        cout<<tt/6;
    }
    else{
        cout<<cnt;
    }
}
