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


int main()
{
	int n;
	si(n);
	ll a[n];
	for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
	ll count1=0;
	ll count2=0;
	ll small=a[0];
	ll large=a[n-1];
	//cout<<small<<" "<<large<<endl;
	int index=0;
	for(int i=0;i<n;i++)
	{
       if(a[i]==small)count1++;
       else break;
	}
	for(int i=n-1;i>=0;i--)
	{
       if(a[i]==large)count2++;
       else break;
	}
	ll ans=0;
	if(large==small){ans=(count1*(count1-1))/2;}
	 else ans=ll(count1*count2);
	cout<<large-small<<" "<<ans;

}
