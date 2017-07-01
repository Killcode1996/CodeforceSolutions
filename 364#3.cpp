#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int value=0;
	int pointer1=0;
	int differentchar=0;
	int pointer2=0;	int b[100005]={0};
	for (int i = 0; i < n; i++)
	{
       if(b[s[i]]==0){differentchar++; pointer2=i; b[s[i]]=1;}
	}
	for (int i = 0; i < n; i++)
	{
		char c=s[i];
		pointer1=i;
		int flag=0;
		for (int j = i+1; j < n;j++)
		{
			if(c==s[j]){flag=1; break;}
		}
		if(flag==0){value=pointer1;break;}
	}
		ll a[100005]={0};
		ll a1[100005]={0};
		ll ans=0; int count=0;
		ll ans1=0; int count1=0;
	
	for (int i = value; i < n; i++)
		{
			ans++;
			if(a[s[i]]==0){count++; a[s[i]]=1;}
			if(count==differentchar)break;
		}	

for(int i=pointer2;i>=0;i--)
{
	         ans1++;
			if(a1[s[i]]==0){count1++; a1[s[i]]=1;}
			if(count1==differentchar)break;
}

if(differentchar==1)
cout<<1;
else
		cout<<min(ans,ans1);
}
