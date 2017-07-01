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
ll b,s,c,pb,ps,pc,r,money;
string re;
ll breq,sreq,creq;

bool check(ll m)
{
	//cout<<"for  :: "<<m<<endl;
	r=money;
	//cout<<money<<endl;
   ll forbread=m*breq;
   ll forsau=m*sreq;
   ll forche=m*creq;
   if(b>=forbread);
   else{
   	ll tp=forbread-b;
   	//cout<<"bread  req :: "<<tp<<endl;
   	r=r-ll(pb*tp);
   // cout<<"remaining r  :: "<<r<<endl;
   	if(r<0)return false;
   }

   if(s>=forsau);
   else{
   	ll tp=forsau-s;
   	//cout<<"sause  req :: "<<tp<<endl;
   	r=r-(ps*tp);
   //	cout<<r<<endl;
   	if(r<0)return false;
   }

   if(c>=forche);
   else{
   	ll tp=forche-c;
   //cout<<"cheese  req :: "<<tp<<endl;
   	r=r-(pc*tp);
  //	cout<<r<<endl;
   	if(r<0)return false;
   }
   //cout<<m<<"  "<<r<<endl;
 
   return true;
}
int main()
{
	cin>>re;
	cin>>b>>s>>c;
	cin>>pb>>ps>>pc;
	cin>>money;
	for(int i=0;i<re.size();i++)
	{
		if(re[i]=='B')breq++;
		else if(re[i]=='S')sreq++;
		else if(re[i]=='C')creq++;
    }
   // if (!check(11)){
   // 	cout<<"egye "<<endl;
   // }
  ll start=0,end=1e15;
  ll mid;
      for(int i=0;i<100005;i++) {
           mid=(start+end)/2;
          if(check(mid))
          {
          	start=mid;
          }
          else {
          	end=mid-1;
          }
     //    cout<<start<<" "<<end<<endl;
      }
   //   cout<<start<<" "<<mid<<" "<<end<<endl;
      if(check(end)){
    //  	cout<<end<<" sda a"<<endl;
      //	cout<<end; cout<<"dea"<<endl;
      	cout<<end;
      }
      else if(check(mid)){
      cout<<mid;
      }
      else 
      cout<<start;
}
