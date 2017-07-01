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
int a[500];
int b[500];
int ans[500];
bool flag[500];
struct node
{
	int v,c,ind;
}q[500];

bool cmp(node x, node y) {
	if(x.v!= y.v) {
		// different blocks, so sort by block.
		return x.v > y.v;
	}
	// same block, so sort by R value
	return x.c > y.c;
}
int main()
{
	int n,w;
	cin>>n>>w;
	int tot=0;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		b[i]=temp;
		tot+=ceil(temp/2.0);
		a[i]=ceil(temp/2.0);
			//cout<<tot<<endl;
		q[i].v=b[i];
		q[i].c=a[i];
		q[i].ind=i;
	
	}
	sort(q,q+n,cmp);
	// for(int i=0;i<n;i++)
 //       {
 //       	cout<<q[i].v<<" "<<q[i].c<<" "<<q[i].ind<<endl;
 //       }
 
	if(tot>w)
	{
		cout<<-1; return 0;
	}
	int rem=w-tot;
	//bool flag=true;
	//cout<<"remaining :: "<<rem<<endl;
	for(int i=0;i<n;i++)
	{
		int vol=q[i].v;
		int cap=q[i].c;
		int can=vol-cap;
		int pos=q[i].ind;
		//cout<<vol<<" "<<cap<<" "<<can<<" "<<pos<<endl;
		if(rem>=can)
		{
        int toadd=can;
        rem=rem-can;
        ans[pos]=cap+toadd;
        flag[pos]=true;
		}
		else{
			int toadd=rem;
			rem=0;
			ans[pos]=cap+toadd;
			flag[pos]=true;
			//break;
		}
		//cout<<" now :: "<<rem<<endl;
		//if(rem==0)break;
	}
	if(rem>0){cout<<-1; return 0;}
	// for(int i=0;i<n;i++)
	// {
	// 	if(!flag[i]){
	// 		ans[i]=q[i].c;
	// 	}
	// }
	for(int i=0;i<n;i++)cout<<ans[i]<<" ";
}
