#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,a,bn,c,count=0;
	cin>>n;
	map<int,int>mp;
	set<int> st;
	for(i=0;i<n;i++)
	{
		cin>>a>>bn;
		mp[i]=a;
		for(j=0;j<bn;j++)
		{
			cin>>c;
			st.insert(c);

		}

	}
	set<int>::iterator it;

	for(it=st.begin();it!=st.end();++it)
	{
		for(j=0;j<n;j++)
		{
		if(*it==mp[j])
			continue;
		else
			count++;
	    }
	}
	cout<<count;

}