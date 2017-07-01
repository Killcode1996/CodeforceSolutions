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
const long long int INF=1e6+5;
const int MOD=1000000007;


//--------------**************---------------------

bool isPrime(ll n){
    if(n<=1)    return false;
    if(n<=3)    return true;
    if(!(n%2) or !(n%3))   return false;
    for(ll i=5;i*i<=n;i+=6){
        if(!(n%i) or !(n%(i+2)))  return false;
    }
    return true;
}


int main()
{
	int n;si(n);
	ll primes[100001]={0};
	primes[0]=4;
	int st=1;
	
		for(ll i=3;i<INF;i+=2)
		{
			if(isPrime(i)){primes[st]=i*i; st++;}
			if(st==100001)break;
		}
		std::vector< ll > v(primes,primes+st);

		// for(int i=0;i<10;i++)cout<<primes[i]<<" ";
		// 	cout<<endl;
while(n--)
    {
    	ll value;
    	cin>>value;
    	if (std::binary_search (v.begin(), v.end(), value))cout<<"YES";
    	else cout<<"NO";
    	cout<<endl;

    	
    }
}
