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
int a[1001][1001];

int main()
{
	int n,m;
	cin>>n>>m;
	//cout<<n<<m<<endl;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)cin>>a[i][j];
   int count=0;
   bool up=false,down=false,right=false,left=false;
   for(int i=0;i<m;i++){
   	up=false;
		for(int j=0;j<n;j++){
			if(a[j][i]==1)up=true;
			if(a[j][i]==0 && up==true){count++; }
		}
	}
		
     //  cout<<count<<endl;
     for(int i=m-1;i>=0;i--){
     	down=false;
		for(int j=n-1;j>=0;j--){
			if(a[j][i]==1)down=true;
			if(a[j][i]==0 && down){count++; }
		}
	}
			//cout<<count<<endl;
      for(int i=n-1;i>=0;i--){
      	left=false;
		for(int j=m-1;j>=0;j--){
			if(a[i][j]==1)left=true;
			if(a[i][j]==0 && left){count++; }
		}
	}
     	//cout<<count<<endl;
	for(int i=0;i<n;i++){
		right=false;
		for(int j=0;j<m;j++){
			if(a[i][j]==1)right=true;
			if(a[i][j]==0 && right){count++; }
		}
	}
		cout<<count;

}