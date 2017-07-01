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
	 std::vector<  ll  > usbs;
	 std::vector<  ll  > ports;

int main()
{
	 int usb,port,both;
	 cin>>usb>>port>>both;

	 int q;
	 cin>>q;
	 while(q--)
	 {
	 	ll n;
	 	cin>>n;
	 	string temp;
	 	cin>>temp;
	 	if(temp=="USB"){
	 		usbs.push_back(n);
	 	}
	 	else{
	 		ports.push_back(n);
	 	}

	 }
	 ll c=0;
	 bool u[300005]={0};
	 bool p[300005]={0};
	 sort(usbs.begin(),usbs.end());
	 sort(ports.begin(),ports.end());
	  	ll ans=0;
	  	ll usb_rem=0;
	  	if(usbs.size()<=usb){
	  		  		usb_rem=usb-usbs.size();
	  		for(int i=0;i<usbs.size();i++){ c++; u[i]=true; ans=ans+usbs[i]; }
	  	}
	  else {
	  	
	  	for(int i=0;i<usb;i++) {c++; u[i]=true; ans=ans+usbs[i]; }
	  }

	//cout<<c<<" "<<ans<<endl;


	  ll port_rem=0;
	  if(ports.size()<=port){
	  	port_rem=port-ports.size();
	  		for(int i=0;i<ports.size();i++){ c++; p[i]=true; ans=ans+ports[i]; }
	  	}
	  else{
	  	
	  	for(int i=0;i<port;i++){ c++; p[i]=true; ans=ans+ports[i]; }
	  }

	//cout<<c<<" "<<ans<<endl;
  //cout<<port_rem<<"  "<<usb_rem<<endl;

	std::vector< ll > mixture;
	for(int i=0;i<usbs.size();i++)
	{
		if(u[i]==false)mixture.pb(usbs[i]);
	}
	for(int i=0;i<ports.size();i++)
	{
		if(p[i]==false)mixture.pb(ports[i]);
	}

	sort(mixture.begin(),mixture.end());
	int total=usb_rem+port_rem+both;

	if(both<=mixture.size()){
       for(int i=0;i<both;i++){ c++; ans=ans+mixture[i]; }
	}
        else{
        	for(int i=0;i<mixture.size();i++){ c++; ans=ans+mixture[i]; }
        }
  cout<<c<<" "<<ans;
}
