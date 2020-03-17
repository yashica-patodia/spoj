#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli max_expo(lli n,lli k);

int main()
{
	lli n;
	int i,j;
	cin>>n;
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(i=2;i*i<=n;i++)
	{
		if(prime[i])
		{
			for(j=i*i;j<=n;j+=i)
				prime[j]=false;
		}
	}
	vector<lli>vec;
	for(i=2;i<=n;i++)
	{
		if(prime[i])
		{
			vec.push_back(i);
		}
	}
	for(i=0;i<vec.size()-1;i++)
	{
		
		lli k=max_expo(n,vec[i]);
		cout<<vec[i]<<"^"<<k<<" "<<"*"<<" ";
	}
	cout<<vec[i]<<"^"<<max_expo(n,vec[i])<<endl;
}
lli max_expo(lli n,lli k)
{
	lli x=k;
	lli expo=0;
	while((n/x)!=0)
	{
		expo+=n/x;
		x*=k;
	}
	return expo;

}