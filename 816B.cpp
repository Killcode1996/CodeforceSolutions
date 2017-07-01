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

// int tree[4*200005];

//   int n,k,m;

// void build_tree(int node, int a, int b) {
//     if(a > b) return; // Out of range
      
//       if(a == b) { // Leaf node
//         if(fre[a]>=k)
//             tree[node]=1;
//         else tree[node]=0;
//            // tree[node] = arr[a]; 
//         return;
//     }
    
//     build_tree(node*2, a, (a+b)/2);
//     build_tree(node*2+1, 1+(a+b)/2, b); 
    
//     tree[node] = tree[node*2]+tree[node*2+1]; 
// }
// int query_tree(int node, int a, int b, int i, int j) {
    
//     if(a > b || a > j || b < i) return 0; 
//     if(a >= i && b <= j) 
//         return tree[node];

//     int q1 = query_tree(node*2, a, (a+b)/2, i, j); 
//     int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); 
//     int res = q1+q2;
    
//     return res;
// }



int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) 
    {  int n,m,k;
           int fre[200005]={0};
          cin>>n>>m;
          for(int i=0;i<m;i++)
          {
            int a,b,k;
            cin>>a>>b>>k;
            fre[a]+=k;
            fre[b+1]+=-k;
          }
          for(int i=1;i<=200000;i++)
          {
            fre[i]=fre[i]+fre[i-1];
          }
         // build_tree(1,0,200002);
          // for(int i=90;i<=100;i++)
          // {
          //   cout<<i<<" :: "<<fre[i]<<endl;
          // }
          int q;cin>>q;
          for(int i=0;i<q;i++)
          {
            int a,b;
            cin>>a;
            cout<<fre[a]<<endl;
           // cout<<query_tree(1,0,200002,a,b)<<endl;
          }
    }
}
