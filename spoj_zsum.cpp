#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli bin(lli a,lli b);
// why do we need to find the modulu at the laststep also at every step doesnt it effect the final ans
// NOT ACCETED YET
lli m=1e7+7;

int main()
{
	int i,p;
lli n,k;
lli a,b,c,d;
vector<lli>vec;
cin>>n>>k;
while(n!=0 && k!=0)
{
	
	 a=(2*bin(n-1,k))%m;/// should this be (2*bin(n,k-1))%m;
	b=(2*bin(n-1,n-1))%m; //should this be 2*bin(n-1,n-1)%m
	c=bin(n,k)%m;
	d=bin(n,n)%m;
	vec.push_back(((a+b)+(c+d))%m); // should this be ((a+b)%m +(c+d)%m)%m
	cin>>n>>k;
	

}
for(i=0;i<vec.size();i++)
{
	cout<<vec[i]<<endl;
}


}
lli bin(lli a,lli b)
{
	lli res=1;
	while(b!=0)
	{
		if(b&1)
			res=(res*a)%m;
		a=(a*a)%m;
		b>>=1;
	}
	return res;
}