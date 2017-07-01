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

bool flag[100005];
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){flag[i]=true; continue;}
		char ch=s[i];
	//	cout<<i<<" sda "<<endl;
	//	cout<<ch<<" "<<s[i+1]<<endl;
		if(s[i+1]!=ch){ flag[i]=true; continue;}
		if(s[i]=='o' && s[i+1]=='o' && s[i+2]!='o'){flag[i]=true; flag[i+1]=true; i++; continue;}
		else if(s[i]=='e' && s[i+1]=='e' && s[i+2]!='e'){flag[i]=true; flag[i+1]=true; i++; continue;}
		else if(s[i]=='a'){
			flag[i]=true;
			while(s[i]=='a'){
				i++;
			}
			i--;
		}
		else if(s[i]=='i'){
			flag[i]=true;
			while(s[i]=='i'){
				i++;
			}
			i--;
		}
		else if(s[i]=='o'){
			flag[i]=true;
			while(s[i]=='o'){
				i++;
			}
			i--;
		}
		else if(s[i]=='u'){
			flag[i]=true;
			while(s[i]=='u'){
				i++;
			}
			i--;
		}
		else if(s[i]=='y'){
			flag[i]=true;
			while(s[i]=='y'){
				i++;
			}
			i--;
		}
		else if(s[i]=='e'){
			flag[i]=true;
			while(s[i]=='e'){
				i++;
			}
			i--;
		}
		else if(s[i]=='o'){
			flag[i]=true;
			while(s[i]=='o'){
				i++;
			}
			i--;
		}
 //cout<<i<<"dsa"<<endl;
	}
 
	for(int i=0;i<n;i++)
	{
		if(flag[i])cout<<s[i];
	}
}
