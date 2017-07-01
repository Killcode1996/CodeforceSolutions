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
	int n;
	si(n);
	int a[n],b[n];
	int sum1=0,sum2=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		sum1+=a[i]; sum2+=b[i]; 
	}
	int maxdiff=abs(sum1-sum2);
	bool flag=true;
	if(sum1>sum2)flag=false;
	int ans=0;
    int diff=INT_MIN;
    int temp1=sum1,temp2=sum2;
	for(int i=0;i<n;i++){

		temp1=temp1-a[i]; temp2=temp2-b[i];
		temp1+=b[i]; temp2+=a[i];
		int di=abs(temp1-temp2);
		if(di>maxdiff){maxdiff=di; ans=i+1;}
		temp1=sum1; temp2=sum2;
	}
	cout<<ans;
}
