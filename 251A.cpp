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
	int n,d;
	cin>>n>>d;
	if(n<=2){cout<<0; return 0;}
	ll dp[100001]={0};
	//memset(dp,0,sizeof(dp));
	std::vector<int> vi; 
	for(int i=0;i<n;i,i++){int temp; scanf("%d",&temp); vi.push_back(temp); }
		for(int i=0;i<n-2;i++)
			{ 
				ll uhi=vi[i]+d;
				//cout<<uhi<<" asd "<<endl;
				std::vector<int>::iterator up;
            //low=std::lower_bound (v.begin(), v.end(), 20); //          ^
            up= std::upper_bound (vi.begin(), vi.end(), uhi); //  
         ll goi = (up - vi.begin());
        goi-=(i+1);

           // int goi=up-i;
				 if(i>0)dp[i]=dp[i-1];
			 // cout<<goi<<endl;
			    ll pro = ll(goi*(goi-1))/2;
			    dp[i]=dp[i]+pro;
				// for(int j=n-1;j>=i+2;j--)
				// { 
    //              if(a[j]-a[i]<=d){     ll temp= j-i; ll pro = ll(temp*(temp-1))/2; dp[i]=dp[i]+pro; break; }
				// }
			}
			// ll ans=0;
		//	for(int i=0;i<n;i++)cout<<dp[i]<<" "; cout<<endl;
	cout<<dp[n-3];
}
 