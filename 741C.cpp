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
int rel[100005];
int data[100005];
int sol[100005];
int flag[100005];

int main()
{
	int n;
	cin>>n;
 for(int i=0;i<n;i++)
 {
 	int a,b;
 	cin>>a>>b;
 	int mn=min(a,b);
 	int mx=max(a,b);
 	rel[mn]=mx;
 	data[mn]=1;
 	//data[mb]=1;
 }

 // for(int i=1;i<=2*n;i++)cout<<data[i]<<" ";
 //  cout<<endl;
 // 	for(int i=1;i<=2*n;i++){if(data[i]>0)cout<<i<<" "<<rel[i]<<endl;}
 // 	cout<<endl;
 for(int i=1;i<=2*n;i++)
 {
 	if(data[i]>0 && (flag[i]==0 && flag[rel[i]]==0 )){
    if(sol[i-1]==1  ){
    	sol[i]=2; sol[rel[i]]=1; flag[i]=1; flag[rel[i]]=1;
    }
    else {
       sol[i]=1; sol[rel[i]]=2; flag[i]=1; flag[rel[i]]=1;
    }
 	}
 }
 
  for(int i=1;i<=2*n;i++)
 {
 	if(data[i]>0){
 		cout<<sol[i]<<" "<<sol[rel[i]]<<endl;
 	}
 }
 for(int i=1;i<=2*n;i++)cout<<sol[i]<<" ";
 	cout<<endl;


}
