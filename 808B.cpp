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
ll prefix[300005];
ll a[300005];
int main()
{
	double n,k;
	cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    	prefix[0]=a[0];
    for(int i=1;i<n;i++)
    	prefix[i]=a[i]+prefix[i-1];
   int p=k-1;
   double ans=0,ans1=0;
   int st=0;
   // for(int i=0;i<n;i++)cout<<prefix[i]<<" ";
   // 	cout<<endl;
   for(int i=p;i<n;i++)
   {
  // 	cout<<prefix[i]<<" ";
   		ll sum;
   	if(i==p)  {sum=prefix[p]; }
   
   	else{
   		 sum=prefix[i]-prefix[st]; st++; }
   		//double val=((double)sum/(double)k);
   		 ans1=ans1+sum;
   //   ans=ans+val;
       //cout<<sum<<"  "<<val<<" "<<ans<<endl;
   }
   int tot=n-k+1;
  // cout<<tot<<endl<<" "<<ans1;
   	cout<<fixed;
   	cout<<setprecision(6)<<" "<<ans1/tot;
   //cout<<ans;
}
