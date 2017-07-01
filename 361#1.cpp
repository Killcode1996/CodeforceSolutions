#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	int a[20]={0};
	int diff=0;
	for(int i=0;i<n;i++)
	{
		if(a[s[i]-48]==0){a[s[i]-48]=1; diff++;}
		else
			count++;
	}
    if(count>0 || diff==9)
    	cout<<"YES";
    else
    	cout<<"NO";
}