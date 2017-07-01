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
int visited[200];
int a[200];

int lcm(int a,int b){
	int c=__gcd(a,b);
	return (a*b)/c;
}

vi odd;
vi even;
int freq[200];
void dfs(int node, int length)
{
   if(visited[node]){
           if(length%2==0)even.pb(length);
           else odd.pb(length);
           return ;
   }

   	visited[node]=1;
   	dfs(a[node],length+1);
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){cin>>a[i]; freq[a[i]]++; }
		for(int i=1;i<=n;i++){
			if(visited[i]==0)
				dfs(i,0);
		}
		for(int i=1;i<=n;i++){
			if(freq[i]!=1){
			cout<<-1; return 0 ;}
		}
  //cout<<odd.size()<<" "<<even.size()<<endl;
   int t=1;
   if(odd.size()==0 && even.size()==0){cout<<-1; return 0;}
   for(int i=0;i<even.size();i++)t=lcm(t,even[i]/2);
   	for(int i=0;i<odd.size();i++)t=lcm(t,odd[i]);
   		cout<<t;
   
}
