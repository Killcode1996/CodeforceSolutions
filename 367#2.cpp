#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;

	scanf("%d",&n);
	int a[100001];
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,a+n);
	int q;
	scanf("%d",&q);
	while(q--)
	{
  int temp;
  scanf("%d",&temp);
  int count=0;
  for(int i=0;i<n;i++)
  {
  	if(temp<a[i])break;
  	count++;
  }
  printf("%d\n",count);
	}
	
}