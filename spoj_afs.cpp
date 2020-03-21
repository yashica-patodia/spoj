#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long int lli;
int main()
{
	lli n=10e6;
	lli i,j,p,q;
	vector<lli>a(n,0);
	a[0]=0;
	a[1]=0;
	// vector<lli> prime(n+1,0);
	// for(i=2;i*i<=n;i++)
	// {
	// 	if(prime[i]==0)
	// 	{
	// 		for(j=i*i;j<=n;j+=i)
	// 			prime[j]=1;
	// 	}
	// }
	// for(i=2;i<20;i++)
	// 	cout<<i<<" "<<prime[i]<<endl;
	vector<int>sum(n+1,1);
	for(j=2;j<=n;j++)
	{
		// if(!prime[j])
		// {
		// 	sum[j]=1;
			for(p=2*j;p<=n;p+=j)
			{
				sum[p]+=j;
			}
			a[j]=a[j-1]+sum[j];
		}
		// else
		// {
		// 	for(q=2*j;q<=n;q+=j)
		// 		sum[q]+=j;
		// }
	
	// for(i=2;i<100;i++)
	// 	cout<<i<<" "<<sum[i]<<endl;
	
	// for(i=2;i<=n;i++)
	// {
	// 	a[i]=a[i-1]+sum[i];
	// }
	// for(i=2;i<=10;i++)
	// 	cout<<a[i]<<endl;
	int t;
	cin>>t;
	lli k;
	for(i=0;i<t;i++)
	{
		cin>>k;
		cout<<a[k]<<endl;
	}

}