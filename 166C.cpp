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
	int a[501]={5};;
	int flag[100001]={0};
	int at;
	int n,x;
	cin>>n>>x;
	at=n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		a[i]=temp; flag[temp]=1;
	}
	sort(a,a+n);
	int ans=0;
	if(flag[x]==0 && x>a[n-1]){cout<<n+1; return 0;}
	if(flag[x]==0){a[n]=x; sort(a,a+n+1); at++; ans++; }
	int index=(at+1)/2;
	cout<<index<<endl;
	index--;
	  std::vector<int> v(a,a+at);
	  std::vector<int>::iterator low,up;
      low=std::lower_bound (v.begin(), v.end(), x); 
        up=std::upper_bound (v.begin(), v.end(), x);
      int right=low-v.begin();
       int left=up-v.begin(); left--;
       if(index>=right && index<=left){cout<<0+ans; return 0; }
      // cout<<right<<endl<<left<<endl;
      cout<<(index-right)+ans;
      cout<<index<<endl<<right<<endl;    

}
