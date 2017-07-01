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
	int n,k,x;
	cin>>n>>k>>x;
	int a[n];
	int b[n];
	int c[n];
	for(int i=0;i<n;i++)cin>>a[i];
		// for(int i=0;i<n;i++)
		// 	cout<<a[i]<<" ";
		// cout<<endl;
		sort(a,a+n);
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
			   b[i]=a[i]^x;
			   else b[i]=a[i];
			  }
			//  cout<<endl;
			  if(k==1)
			  {
			  	sort(b,b+n);
			  	cout<<b[n-1]<<" "<<b[0]; return 0;
			  }
			  else if(k==0){
			  	sort(a,a+n);
			  	cout<<a[n-1]<<" "<<a[0]; return 0;
			  }
for(int i=0;i<2;i++)
{
	sort(a,a+n);
	for(int j=0;j<n;j++)
	{
		if(j%2==0)a[j]=a[j]^x;
	}
}


	sort(a,a+n);
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
			   c[i]=a[i]^x;
			   else c[i]=a[i];
			  }
			//  cout<<endl;
			  if(k%2!=0)
			  {
			  	sort(c,c+n);
			  	cout<<c[n-1]<<" "<<c[0];
			  }
			  else{
			  	sort(a,a+n);
			  	cout<<a[n-1]<<" "<<a[0];
			  }
		
}
