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

string pre[52]= {"Aa","Ab","Ac","Ad","Ae","Af","Ag","Ah","Ai","Aj","Ak","Al","Am","An","Ao","Ap","Aq","Ar","As","At","Au","Av","Aw","Ax","Ay","Az","Ba","Bb","Bc","Bd",
"Be","Bf","Bg","Bh","Bi","Bj","Bk","Bl","Bm","Bn","Bo","Bp","Bq","Br","Bs","Bt","Bu","Bv","Bw","Bx","By","Bz"};

int main()
{
	int n,k;
	cin>>n>>k;
	std::vector< string > v;
	string s;
	int st=0;
	while(cin>>s)
	{
		v.push_back(s);
	}
	//cout<<v.size()<<endl;
	int a=65;
	std::vector< string > ans;
	if(v[0]=="YES"){
    for(int i=0;i<k;i++)
    {
     //  string s="";
      // s=s+char(a);a++;
       ans.push_back(pre[st]); st++;
    } }
    else{
    	//string s="A";
     //  s=s+char(a);
         ans.push_back(pre[0]);
       //  a++;
          for(int i=0;i<k-1;i++)
    {
       //string s="";
       //s=s+char(a);a++;
       ans.push_back(pre[st]); st++;
    }

    }
    // for(int i=0;i<ans.size();i++)
    // 	cout<<ans[i]<<" ";
    // cout<<endl;

    for(int i=1;i<v.size();i++)
    {
    	if(v[i]=="YES"){
    	//	string s="";
    		//s=s+char(a);
    		ans.push_back(pre[st]); st++;

    	}
    	else{
    		int tp=ans.size();
    		int l=tp-k+1;
    		string s=ans[l];
    		ans.push_back(s);
    	}
    }
    for(int i=0;i<ans.size();i++)
    	cout<<ans[i]<<" ";
}
