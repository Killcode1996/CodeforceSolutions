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

ll BLOCK;
ll cnt[2000005], a[2000005], ans[2000005], answer;
ll k;
struct node {
	int L, R, i;
}q[500005];

bool cmp(node x, node y) {
	if(x.L/BLOCK != y.L/BLOCK) {
		return x.L/BLOCK < y.L/BLOCK;
	}
	return x.R < y.R;
}


void add(int position) {
    //cout<<"adding :: "<<cnt[a[position]]<<endl;
 ll s =a[position];
  answer+=(1+2*cnt[s])*s;
  cnt[s]++; 
}

void remove(int position) {
    //cout<<"removing :: "<<cnt[a[position]]<<endl;
	ll s =a[position];
  answer+=(1-2*cnt[s])*s;
  cnt[s]--; 
}

int main() {
	int n,m;
	scanf("%d%d", &n,&m);
	BLOCK=sqrt(n);
	for(int i=1; i<=n; i++)
		scanf("%lld", &a[i]);

	for(int i=0; i<m; i++) {
		scanf("%d%d", &q[i].L, &q[i].R);
		//q[i].L--; q[i].R--; 
		q[i].i = i;
	}

	sort(q, q + m, cmp);
		//for(int i=0;i<m;i++)
	//{
	//    cout<<q[i].L<<" "<<q[i].R<<endl;
	//}

int currentL = 0, currentR = 0;
 for(int i=0; i<m; i++)
{
	


		int L = q[i].L, R = q[i].R;
		while(currentL < L) {
			remove(currentL);
			currentL++;
		}
		while(currentL > L) {
			add(currentL-1);
			currentL--;
		}
		while(currentR <= R) {
			add(currentR);
			currentR++;
		}
		while(currentR > R+1) {
			remove(currentR-1);
			currentR--;
		}
		//cout<<answer<<endl;
		ans[q[i].i] = answer;
	}

	for(int i=0; i<m; i++)
		printf("%lld\n", ans[i]);
}