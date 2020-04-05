#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long  lli;
#define M 1000000007

lli mul(lli n);
void mul2(lli a[][2],lli b[][2]);


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli l,r;
		cin>>l>>r;
		cout<<(mul(r+2)-mul(l+1)+M)%M<<endl;
	}
}
lli mul(lli n)
{
	lli fib[2][2]={{1,1},{1,0}};
	lli temp[2][2]={{1,0},{0,1}};
	while(n)
	{
		if(n&1)
			mul2(temp,fib);
		mul2(fib,fib);
		n>>=1;
	}
	return temp[1][0];
}
void mul2(lli a[][2],lli b[][2])
{
	int i,j,k;
	lli res[2][2];
	memset(res,0,sizeof(res));
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
				res[i][j]=(res[i][j]+a[i][k]*b[k][j]) %M;

		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			a[i][j]=res[i][j];
	}
}