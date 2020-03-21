#include<bits/stdc++.h>
using namespace std;
# define K (100010)
typedef long long int lli;
lli check2(lli n,int d);
lli check1(lli n);


vector<lli> sp(K);
int  main()
{
	int t;
	cin>>t;
	int i,j;
	sp[1]=1;
	for(i=2;i<K;i++)
		sp[i]=i;
	for(i=4;i<K;i+=2)
		sp[i]=2;
	for(i=3;i*i<K;i++)
	{
		if(sp[i]==i)
		{
			for(j=i*i;j<K;j+=i)
				if(sp[j]==j)
					sp[j]=i;
		}
	}
	// for(i=2;i<15;i++)
	// 	cout<<i<<" "<<sp[i]<<endl;
	lli a,b,d;
	for(i=0;i<t;i++)
	{
		cin>>a>>b>>d;
		lli c=0;
		for(j=a;j<=b;j++)
		{
			//cout<<j;
			 int f=check1(j);
			 //cout<<j<<" "<<f<<endl;
			if(check1(j)==0 && check2(j,d)==1 )
				c++;

		}
		cout<<c;

	}

}
lli check1(lli n)
{
	lli ct[100100]={0};
	while(n!=1)
	{
		// cout<<n<<" ";
		ct[sp[n]]++;
		
		
		
		// cout<<n<<" "<<ct[sp[n]]<<endl;
		if(ct[sp[n]]>=2)
		{
			
			return 1;
		}
		n=n/sp[n];

	}
	return 0;

}
lli check2(lli n,int d)
{
	int dig;
	while(n!=0)
	{
		dig=n%10;
		if(dig==d)
		{
			return 1;
		}
		n=n/10;

	}
	return 0;
}
