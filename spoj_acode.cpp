#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli dp[5010];
lli  find(string s);
vector<lli>vec;
int main()
{
	int i;
	string n;
	cin>>n;
	do
	{
	lli k=	find(n);
	vec.push_back(k);

		cin>>n;
	}
	while((n[0]-48)!=0);
	for(i=0;i<vec.size();i++)
		cout<<vec[i]<<endl;
}
lli  find(string s)
{
	int l=s.length();
	int i;
	dp[0]=1;
	dp[1]=1;
	for(i=2;i<=l;i++)
	{ 
		dp[i]=0;
		if((s[i-1]-48)!=0)
		dp[i]=dp[i-1];
		lli x=(s[i-2]-48)*10+(s[i-1]-48);
		if( x>=10 && x<=26)
			dp[i]+=dp[i-2];
	}
	// cout<<dp[l]<<endl;
	return dp[l];
}