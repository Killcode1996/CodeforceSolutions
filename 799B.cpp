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


struct node {
	int p;
	int a;
	int b;
};
 
int main() {
	int n;
	cin >> n;
 
	vector<node> val(n);
	map<int, set<int> > task;
	task[1] = set<int>();
	task[2] = set<int>();
	task[3] = set<int>();
	for(int i = 0; i < n; i++) {
		cin >> val[i].p;
	}
	for(int i = 0; i < n; i++) {
		cin >> val[i].a;
		task[val[i].a].insert(val[i].p);
	}
	for(int i = 0; i < n; i++) {
		cin >> val[i].b;
		task[val[i].b].insert(val[i].p);
	}
 
	int m;
	cin >> m;
	for(int i = 0 ; i < m; i++) {
		int x;
		cin >> x;
		if(task[x].size()) {
		int ans = *task[x].begin();
		task[1].erase(ans);
		task[2].erase(ans);
		task[3].erase(ans);
		cout << ans << " ";
		}
		else {
			cout << "-1 ";
		}
	}
	return 0;
}
