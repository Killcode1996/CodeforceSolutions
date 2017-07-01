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
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
		int countneg=0,countzero=0,countpos=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)countzero++;
		else if(a[i]<0)countneg++;
		else countpos++;
	}
	sort(a,a+n);
	if(countpos==0)
	{
		cout<<countneg-2<<" ";
		for(int i=0;i<countneg-2;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		cout<<2<<" ";
		for(int i=countneg-2;i<countneg;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		cout<<countzero<<" ";
		for(int i=0;i<n;i++)
			if(a[i]==0)cout<<a[i]<<" ";
    }
    else{
    	cout<<countneg<<" ";
		for(int i=0;i<countneg;i++)
			if(a[i]<0)cout<<a[i]<<" ";
		cout<<endl;
		cout<<countpos<<" ";
		for(int i=0;i<n;i++)
			if(a[i]>0)cout<<a[i]<<" ";
		cout<<endl;
		cout<<countzero<<" ";
		for(int i=0;i<n;i++)
			if(a[i]==0)cout<<a[i]<<" ";

    }
}
