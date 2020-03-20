#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j;
	cin>>t;
	vector<int>phi(10e6+1);
	phi[0]=0;
	phi[1]=1;
	for(i=2;i<=10e6;i++)
	{
		phi[i]=i;
	}
	for(i=2;i<=10e6;i++)
	{
		if(phi[i]==i)
		{
			phi[i]=i-1;
			for(j=2*i;j<=10e6;j+=i)
				phi[j]=(phi[j]/i)*(i-1);
		}
	}
	for(i=0;i<t;i++)
	{
		int k;

		cin>>k;
		cout<<phi[k]<<endl;
	}
}