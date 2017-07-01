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
	int su[100005];

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++)cin>>a[i];
		su[0]=a[0];
	for(int i=1;i<n;i++)
	{
		su[i]=su[i-1]+a[i];
	}
	int q;
	cin>>q;
	vector < int > sum(su,su+n);
	// for(int i=0;i<n;i++)cout<<sum[i]<<" ";
	// 	cout<<endl;
	for(int i=0;i<q;i++)
	{
		int temp;
		cin>>temp;
			std::vector<int>::iterator low;
  low= std::lower_bound (sum.begin(), sum.end(), temp); //                   ^
  cout << (low - sum.begin())+1 << '\n';
    } 

}
