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
	string s1,s2,s3,t2,t3;
	cin>>s1>>s2>>s3;
	int freq1[200]={0};
	int freq2[200]={0};
	int freq3[200]={0};
	string ans="";
	string ans1="";
		int fir=0,sir=0;
	for(int i=0;i<s1.length();i++)freq1[s1[i]-97]++;
		for(int i=0;i<s2.length();i++)freq2[s2[i]-97]++;
			for(int i=0;i<s3.length();i++)freq3[s3[i]-97]++;
	int mn=INT_MAX;
// for(int i=0;i<3;i++)cout<<freq1[i]<<" ";
// 	cout<<endl;
  for(int i=0;i<26;i++)
  {
  	    int temp1=freq1[i];
  	    int temp2=freq2[i];
  	    if(temp2==0)continue;
  		int req=temp1/temp2;
  		mn=min(mn,req);
  	
  }
  fir=fir+mn;
   for(int i=0;i<mn;i++)ans=ans+s2;
  // 	cout<<ans<<endl;
  	for(int i=0;i<26;i++)
  	{
  		if(freq2[i]>0){freq1[i]-=(mn*freq2[i]);}
  	}
  	
// for(int i=0;i<3;i++)cout<<freq1[i]<<" ";
// 	cout<<endl;
  	mn=INT_MAX;
  for(int i=0;i<26;i++)
  {
        int temp1=freq1[i];
  	    int temp2=freq3[i];
  	    if(temp2==0)continue;
  		int req=temp1/temp2;
  		mn=min(mn,req);
  }
  // cout<<" mn :: "<<mn<<endl;
  fir+=mn;
  for(int i=0;i<mn;i++)ans=ans+s3;
  	for(int i=0;i<26;i++)
  	{
  		if(freq3[i]>0)
  		freq1[i]=freq1[i]-(mn*freq3[i]);
  	}

// for(int i=0;i<3;i++)cout<<freq1[i]<<" ";
// 	cout<<endl;
//   	cout<<ans<<endl;
  	for(int i=0;i<26;i++)
  	{
  		int temp=freq1[i];
  		while(temp>0)
  		{
  			ans=ans+char(i+97);
  			temp--;
  		}
  	}


  	//-------------

     for(int i=0;i<200;i++)
     {
     	freq3[i]=0; freq1[i]=0; freq2[i]=0;
     }
  	for(int i=0;i<s1.length();i++)freq1[s1[i]-97]++;
		for(int i=0;i<s2.length();i++)freq2[s2[i]-97]++;
			for(int i=0;i<s3.length();i++)freq3[s3[i]-97]++;
	 mn=INT_MAX;
// for(int i=0;i<3;i++)cout<<freq1[i]<<" ";
// 	cout<<endl;
  for(int i=0;i<26;i++)
  {
  	    int temp1=freq1[i];
  	    int temp2=freq3[i];
  	    if(temp2==0)continue;
  		int req=temp1/temp2;
  		mn=min(mn,req);
  	
  }
  sir=sir+mn;
   for(int i=0;i<mn;i++)ans1=ans1+s3;
  // 	cout<<ans<<endl;
  	for(int i=0;i<26;i++)
  	{
  		if(freq3[i]>0){freq1[i]-=(mn*freq3[i]);}
  	}
  	
// for(int i=0;i<3;i++)cout<<freq1[i]<<" ";
// 	cout<<endl;
  	mn=INT_MAX;
  for(int i=0;i<26;i++)
  {
        int temp1=freq1[i];
  	    int temp2=freq2[i];
  	    if(temp2==0)continue;
  		int req=temp1/temp2;
  		mn=min(mn,req);
  }
  // cout<<" mn :: "<<mn<<endl;
  sir+=mn;
  for(int i=0;i<mn;i++)ans1=ans1+s2;
  	for(int i=0;i<26;i++)
  	{
  		if(freq2[i]>0)
  		freq1[i]=freq1[i]-(mn*freq2[i]);
  	}

// for(int i=0;i<3;i++)cout<<freq1[i]<<" ";
// 	cout<<endl;
//   	cout<<ans<<endl;
  	for(int i=0;i<26;i++)
  	{
  		int temp=freq1[i];
  		while(temp>0)
  		{
  			ans1=ans1+char(i+97);
  			temp--;
  		}
  	}
  if(fir>=sir)cout<<ans;
  else cout<<ans1;
}
