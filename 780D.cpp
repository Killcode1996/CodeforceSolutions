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

std::vector < pair < pair < string , string > , int > > v;

std::vector< pair < int , string > > solution;
int main()
{
	int n;
	cin>>n;
	bool ans=true;
	for(int i=0;i<n;i++)
	{
		string s,s1;
		cin>>s>>s1;
	string temp="";
	string temp1="";
	temp=temp+s[0]+s[1]+s[2];
	temp1=temp1+s[0]+s[1]+s1[0];
		v.push_back(make_pair(make_pair(temp,temp1),i));
	}
    set < string > st;
	sort(v.begin(),v.end());
	bool flag[100005]={0};
	//cout<<n<<endl;
	//for(int i=0;i<n;i++)
	//	cout<<v[i].fi.fi<<" "<<v[i].fi.se<<" "<<v[i].se<<endl;
	for(int i=0;i<n;i++)
	{
		if(flag[i])continue; 
		string t1=v[i].fi.fi;
		string t2=v[i].fi.se;
		int ind1=v[i].se;
		bool fl=true;
		bool us=true;
		 for(int j=i+1;j<n;j++)
		 {
		 	 	//cout<<" caming for "<<i<<"  "<<j<<endl;
               string t11=v[j].fi.fi;
		       string t21=v[j].fi.se;
		       int ind2=v[j].se;
		       if(t1==t11){
		       //	cout<<" came for "<<i<<"  "<<j<<endl;
		       	if(t2==t21){ans=false; break;}
		       	else{
		       		  	//cout<<" came inside for "<<i<<"  "<<j<<endl;
		       		us=false;
                     flag[j]=true;
                       if(st.count(t21)){   ans=false; }
                      else { st.insert(t21);
                      solution.pb(make_pair(ind2,t21)); }
                      fl=false; 
		       	  }
		       //	  cout<<"ans flag "<<ans<<endl;
		       }
		      
		 }
		  if(!ans)break;
		  if(fl){
		              		st.insert(t1); solution.pb(make_pair(ind1,t1));
		     }
		     else{
		     	if(st.count(t2))ans=false;
		     st.insert(t2); solution.pb(make_pair(ind1,t2));
		     }
		
	}
	// string lt1=v[n-1].fi.fi;
	// string lt2=v[n-1].fi.se;
	// cout<<lt1<<" "<<lt2<<endl;
	// int li=v[n-1].se;
	// if(st.count(lt1)){
	// 	if(st.count(lt2)){cout<<"rejected " <<endl; ans=false; }
	// 	else{
 //                 st.insert(lt2);
 //                 solution.push_back(make_pair(li,lt2));
	// 	}
	// }
	// else{
	// 	st.insert(lt1);
	// 	solution.push_back(make_pair(li,lt1));
	// }
	sort(solution.begin(),solution.end());
	if(!ans){cout<<"NO"; return 0;}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++)
		cout<<solution[i].se<<endl;
	
}
