#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(lli n);
map<int,lli>dp;
int main()
{
	int t,i;
	// cin>>t;
	lli n;
	while(cin>>n)
	{
		
		lli k=find(n);
		cout<<k<<endl;

	}
}
lli find(lli n)
{
		if(n==0)
		return 0;
	
	if(dp[n]!=0)
		return dp[n];
	
	 return	dp[n]=max(n,(find(n/2)+find(n/3)+find(n/4)));
}