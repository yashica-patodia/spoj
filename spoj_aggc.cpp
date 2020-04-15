#include<bits/stdc++.h>
using namespace std;
typedef   long long int lli;
int check(lli p);
	vector<lli>vec;
	lli n,c;
int main()
{

lli t;
lli i;
cin>>t;
while(t--)
{
	cin>>n>>c;
vec.clear();
	for(i=0;i<n;i++)
	{
		lli p;
		cin>>p;
		vec.push_back(p);
	}
	sort(vec.begin(),vec.end());
	// for(i=0;i<n;i++)
	// 	cout<<vec[i]<<" ";
	lli lb=0,ub=vec[n-1]+1,mm;
	while(lb<ub-1)
	{
		 mm=lb+(ub-lb)/2;
		if(check(mm))
			lb=mm;
		else
			ub=mm;
		//cout<<lb<<" "<<mm<<" "<<ub<<endl;
	}

cout<<lb<<endl;

}
}
int check(lli p)
{
	lli i;
	lli curr=vec[0];
	lli cnt=1;
	for(i=1;i<n;i++)
	{
		if(vec[i]-curr>=p)
		{
			cnt++;
			if(cnt==c)
				return 1;
			curr=vec[i];
		}
		// if(cnt>=c)
		// 	break;

	}
	
		return 0;

}