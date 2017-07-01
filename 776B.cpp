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
bool isPrime(int n){
    if(n<=1)    return false;
    if(n<=3)    return true;
    if(!(n%2) or !(n%3))   return false;
    for(int i=5;i*i<=n;i+=6){
        if(!(n%i) or !(n%(i+2)))  return false;
    }
    return true;
}
int a[100005];
int main()
{
	int p=2;
	int n;
	cin>>n;
	//a[1]=1;
	int k=2;
	for(int i=1;i<=n;i++)
	{ if(isPrime(i+1))a[i]=1;
		else a[i]=2;
	}
    
   if(n<=2)
   	cout<<1<<endl;
   else 
   cout<<2<<endl;
   for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
