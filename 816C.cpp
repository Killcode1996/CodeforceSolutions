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

int n,m;
int arr[105][105];
int ne[105][105];
int ne1[105][105];
std::vector<string> ans;
std::vector<string> ans1;


string conver(int num)
{

}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }

     
    bool flaga=true; bool flagb=true;

    for(int i=1;i<=n;i++)
    {
        int mx=INT_MIN; int mn=INT_MAX;
        for(int j=1;j<=m;j++)
        {
            mx=max(mx,arr[i][j]);
            mn=min(mn,arr[i][j]);

        }
            for(int l=1;l<=mn;l++)
             {
                 for(int k=1;k<=m;k++)ne[i][k]+=1;
                string s="row ";
                s+=to_string(i);
               //  cout<<s<<endl;
                ans.push_back(s);
                        
             }

             for(int k=1;k<=m;k++)
             {
                if(ne[i][k]!=arr[i][k])
                {

                     int temp=arr[i][k]-ne[i][k];
                      for(int l=1;l<=temp;l++)
                      {
                                 for(int x=1;x<=n;x++)ne[x][k]+=1;
                                string s="col ";
                                s+=to_string(k);
                               //  cout<<s<<endl;
                                ans.push_back(s);
                        
                      }


                 }
             }
       
    }




      for(int i=1;i<=m;i++)
    {
        int mx=INT_MIN; int mn=INT_MAX;
        for(int j=1;j<=n;j++)
        {
            mx=max(mx,arr[j][i]);
            mn=min(mn,arr[j][i]);

        }
       //  cout<<" min :: "<<mn<<endl;
            for(int l=1;l<=mn;l++)
             {
                 for(int k=1;k<=n;k++)ne1[k][i]+=1;
                string s="col ";
                s+=to_string(i);
               //  cout<<s<<endl;
                ans1.push_back(s);
                        
             }
           //   cout<<"da  "<<endl;
             for(int k=1;k<=n;k++)
             {
               // cout<<"dad "<<arr[k][i]<<endl;
                if(ne1[k][i]!=arr[k][i])
                {

                     int temp=arr[k][i]-ne1[k][i];
                    // cout<<" jkdjas  "<<k<<" "<<temp<<endl;
                      for(int l=1;l<=temp;l++)
                      {
                                 for(int x=1;x<=n;x++)ne1[k][x]+=1;
                                string s="row ";
                                s+=to_string(k);
                               //  cout<<s<<endl;
                                ans1.push_back(s);
                        
                      }


                 }
             }
       
    }



     for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(ne[i][j]!=arr[i][j]){
                    flaga=false;
                }
            }
        }


        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(ne1[i][j]!=arr[i][j]){
                    flagb=false;
                }

            }
        }
       // cout<<ans.size()<<" "<<ans1.size()<<endl;
        if(!flaga && !flagb){cout<<-1; return 0;}
        if(ans1.size()<=ans.size() &&flagb)
        {
             cout<<ans1.size()<<endl;
        for(int i=0;i<ans1.size();i++)
            cout<<ans1[i]<<endl;
        return 0;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<endl;
}
