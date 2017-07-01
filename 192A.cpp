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

int a[SZ];

void precompute(){
	for(int i=1;i<=100000;i++)
		{ ll v=ll(i*(i+1));		a[i]=v/2;
	}
}
int main()
{
 
	precompute();
	a[0]=-1;
	int n;
	cin>>n;
    //if(n==1){cout<<"NO"; return 0;}
	int p=90000;
	// for(int i=0;i<10;i++)cout<<a[i]<<" ";
	// 	cout<<endl;
	for(int i=1;i<=p;i++){
		int temp=n-a[i];
		if(temp<0)break;
		  if (binary_search (a+1,a+p,temp)){cout<<"YES"; return 0;}
	}
	cout<<"NO";

}