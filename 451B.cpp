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
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
		bool p=true;
		for(int i=n-1;i>=0;i--){
			if(arr[i]<arr[i-1]){p=false; break; }
		}
		if(p){cout<<"yes"<<endl<<"1"<<" "<<"1"; return 0;}
		int left=0,right=n-1;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1] && flag==false){flag=true; left=i; }
		if(arr[i]<arr[i+1] && flag){right=i; break; }
    }
 
      vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]) );
    reverse(v.begin()+left, v.begin()+right+1);
    // for(int i=0;i<n;i++)cout<<v[i]<<" ";
    // 	cout<<endl;
    for(int i=1;i<n;i++)
    {
    	if(v[i]<v[i-1]){cout<<"no"; return 0;}
    }
    cout<<"yes"<<endl;
    cout<<left+1<<" "<<right+1;
}
