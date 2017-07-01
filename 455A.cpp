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
	int freq[100005];
    bool flag[100005];
int main()
{
	int n;
	cin>>n;
      int mx=INT_MIN; int mn=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
		mx=max(mx,a[i]);
		mn=min(mn,a[i]);
		freq[a[i]]++; 
	}
 ll ans=0;
 for(int i=mx-1;i>=mn;i--)
 {
 	if(!flag[i])
 	{
 		ll own=i*freq[i];
 		ll next=(i-1)*freq[i-1];
 		ll prev=(i+1)*freq[i+1];
 		ll total=next+prev;
 	//	cout<<own<<" "<<total<<endl;
 		if(own>=total){
 			ans=ans+own;
 			flag[i-1]=true; flag[i+1]=true;
 		}
 		else{
 			ans=ans+total;
 			flag[i]=true; flag[i-1]=true; flag[i+1]=true;
 		}
 	}
 }

cout<<ans;
}
