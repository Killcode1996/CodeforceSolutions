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
	string s;
	cin>>s;
	int po=0;
	bool flag=true;
	int count=0;
      for(int i=0;i<s.length();i++)
      {
      	if(s[i]=='e'){ flag=false; continue;}
      	if(flag){count++; continue; }
      	int num=s[i]-48;
       po=po*10+num;
      }
      //cout<<po<<endl;
       string ans="";

       flag=true;
      int pos=s.length()-1;
      double fin=0;
      for(int i=0;i<s.length();i++)
      {
          if(s[i]=='.'){continue; }
          if(s[i]=='e')break;
          fin=fin*10+(s[i]-48);
      }
       cout<<fin;
   //   cout<<ans<<" "<<pos<<endl;
   //    if(pos+1<count){
   //    	ans=ans+'.';
   //     for(int i=pos+1;i<s.length();i++)
   //     {
   //     	if(s[i]=='e')break;
   //         ans=ans+s[i];
   //     }
   // }
   // if(po>0){
   // 	while(po--)ans=ans+'0';
   // }
   // cout<<ans;
}
