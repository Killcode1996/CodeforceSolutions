#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s="I hate ";
	string s1="I love ";
	string s2="that ";
	string s3="it ";

	if(n%2==0)
	{ int p=n;
     for(int i=0;i<n/2;i++)
     {
     	
     	cout<<s<<s2<<s1;
     	if(p>2){cout<<s2; p=p-2;}

     }
     cout<<s3;

	}
	else
	{
		int count=n-1;
		int count1=n/2;
  for(int i=0;i<=n/2;i++)
     {
     	
     	cout<<s;
     	if(count>0)cout<<s2; count=count-1;
     	if(count1>0)cout<<s1; count1=count1-1;
     	if(count>0)cout<<s2; count=count-1;


     }
     cout<<s3;
	}
}