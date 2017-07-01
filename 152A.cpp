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
#define FILL(a,b) memset(a,b,sizeof(a));
#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,a,b) for(int i=1;i<=b;i++)
const int INF=1e9+5;
const int MOD=1000000007;

//--------------**************---------------------


int main()
{
	int n,m;
	cin>>n>>m;
	//int arr[101][101];
	string s[101];
  //   FILL(arr,0);
     rep(i,n){
      cin>>s[i];
     }
        
     int a[101];
     FILL(a,-1);
    // for(int i=0;i<m;i++){
     	for(int j=0;j<m;j++)
     	{
     		for(int k=0;k<n;k++){
     			int p=int(s[k][j])-48;
     		a[j]=max(a[j],p);
     		 }
     	
     	}
   //  }
     	//cout<<s[2]<<endl;
     	//cout<<a[2];
     	int ans=0;
     	for(int j=0;j<n;j++)
     	{
     		for(int k=0;k<m;k++){
     			int p=int(s[j][k])-48;
     			//cout<<p<<" ";
     		if(p==a[k]){ans++;  break; }
     		 }
     		// cout<<endl;
     	}
 cout<<ans;
     
    // for(int i=0;i<m;i++)cout<<a[i]<<" ";


}
