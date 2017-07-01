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
int n,s;
int ind=0;
cin>>n>>s;
if(s==0 && n>1){cout<<-1<<" "<<-1; return 0;}
if(s==0 && n==1){cout<<0<<" "<<0; return 0;}
int extra=s%9;
int p=s/9;
//cout<<p<<" "<<extra<<endl;
int temp=n*9;
string st="";
string st1="";
string st2="";
	string ne="";

if(s>temp){
	cout<<-1<<" "<<-1; return 0;

}
else{
	
	for(int i=0;i<p;i++)st=st+char(57);
	st=st+char(48+extra);
      for(int i=0;i<n-p-1;i++)st=st+char(48);
         
         int num=s-1;
     int p=n-1;
     while(p--)
     {
     	if(num<=9){
     		st1=st1+char(48+num); num=0;
     	}
     	else {
     		st1=st1+char(57); num-=9;
     	}
     }
     st1=st1+char(49+num);
}
   // cout<<st1<<endl;

	for(int i=n-1;i>=0;i--){cout<<st1[i];}
	 cout<<" ";
	for(int i=0;i<n;i++)cout<<st[i];
}