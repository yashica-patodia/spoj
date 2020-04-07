#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long lli;
//this is not accepted due to seg fault
int main()
{
	lli n,num;
	lli i,j;
	cin>>n;
	vector<lli>vec;
	for(i=0;i<n;i++)
	{
		cin>>num;
		vec.push_back(num);
		// cout<<vec[i]<<endl;
	}
	lli lp[n+8][n+8];
	for(i=0;i<n;i++)
	{
		lp[i][0]=i;
	}
	for(j=1;(1<<j)<=n;j++)
	{
		for(i=0;(i+(1<<j)-1)<n;i++)
		{
			// cout<<vec[lp[i][j-1]]<<" "<<vec[lp[i+(1<<(j-1))][j-1]]<<endl;
			if(vec[lp[i][j-1]]<vec[lp[i+(1<<(j-1))][j-1]])
				lp[i][j]=lp[i][j-1];
			else
				lp[i][j]=lp[i+(1<<(j-1))][j-1];
			// cout<<lp[i][j]<<" "<<lp[i][j-1]<<" "<<lp[i+(1<<(j-1))][j-1]<<endl;
		}
	}

	int q;
	cin>>q;
	int l,r;
	while(q--)
	{
		cin>>l>>r;
		// cout<<l<<" "<<r<<endl;;
		int lg=(int)log2(r-l+1);
		// cout<<lg<<endl;
		// cout<<vec[lp[l][lg]]<<" "<<vec[lp[r-(1<<(lg))+1][lg]]<<endl;
		if(vec[lp[l][lg]]<=vec[lp[r-(1<<(lg))+1][lg]])
			cout<<vec[lp[l][lg]]<<endl;
		else
			cout<<vec[lp[r-(1<<(lg))+1][lg]]<<endl;

	}
}