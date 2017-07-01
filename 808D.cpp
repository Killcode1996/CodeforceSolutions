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

ll a[500005];
ll prefix[500005];
int main() 
{
 int n;
 cin>>n;
 ll sum=0;
 for(int i=1;i<=n;i++)
 {
 	cin>>a[i];
 	if(i==0)prefix[i]=a[i];
 	else
 	{
 		prefix[i]=a[i]+prefix[i-1];
 	}
 	sum=sum+a[i];
 }

 if(n==1 || sum%2!=0){
 	cout<<"NO"; return 0;
 }
 sum=sum/2;
 for(int i=1;i<=n;i++)
   {
      int lo = 0, hi = i-1;
  	while(lo <= hi){
  		int mid = (lo + hi) / 2;
  		ll val = prefix[mid] + a[i];
  		if(val == prefix[n]/2){
  			cout << "YES\n";
  			return 0;
  		}
  		if(val <= prefix[n]/2){
  			lo = mid+1;
  		}
  		else hi=mid-1;
  	}

  	lo = n+1, hi = i + 1;
  	while(lo>=hi){
  		int mid=(lo+hi)/2;
  		ll val = prefix[n] - prefix[mid-1] + a[i];
  		if(val == prefix[n]/2){
  			cout << "YES\n";
  			return 0;
  		}
  		if(val <= prefix[n]/2){
  			lo = mid-1;
  		}
  		else hi=mid+1;
  	}
   }
 cout<<"NO";
}