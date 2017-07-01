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


string aap[26]={"00","01","02","03","04","05","06","07","08","09","10"
,"11","12","13","14","15","16","17","18","19","20",
"21","22","23","00"};

string con[122]={"00","01","02","03","04","05","06","07","08","09","10"
,"11","12","13","14","15","16","17","18","19","20",
"21","22","23","24","25","26","27","28","29","30","31","32","33"
,"34","35","36","37","38","39","40","41","42","43","44","45","46",
"47","48","49","50","51","52","53","54","55","56","57","58","59",
"00","01","02","03","04","05","06","07","08","09","10"
,"11","12","13","14","15","16","17","18","19","20",
"21","22","23","24","25","26","27","28","29","30","31","32","33"
,"34","35","36","37","38","39","40","41","42","43","44","45","46",
"47","48","49","50","51","52","53","54","55","56","57","58","59",
};
string add(string s)
{
   // cout<<con.length();
  for(int i=0;i<120;i++)
  {
    if(con[i]==s)
    {
        return con[i+1];
    }
  }

}
string add1(string s)
{
   // cout<<con.length();

  for(int i=0;i<24;i++)
  {
    if(aap[i]==s)
    {
        return aap[i+1];
    }
  }

}
int main()
{
  string s;
  cin>>s;
  string fir="";
  int i=0;
  string sir="";
  for( i=0;i<s.length();i++)
  {
    if(s[i]==':')break;
    fir+=s[i];
  }

   for( int j=i+1;j<s.length();j++)
  {
    sir+=s[j];
  }
 //  cout<<fir<<" "<<sir<<endl;
 int ans=0;
 while(1)
 {
        if(fir[0]==sir[1] && fir[1]==sir[0])break;
    sir=add(sir);
    ans++;
   // cout<<sir<<endl;
    if(sir=="00")
    {
        fir=add1(fir);
    }
  //  cout<<fir<<" "<<sir<<endl;
  //  string k=sir;
  //  cout<<sir<<endl;

 }
 cout<<ans;
}
