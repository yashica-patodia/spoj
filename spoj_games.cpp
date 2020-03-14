#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
typedef long long int lli;;
lli gcd(lli a,lli b);
lli convert(string s);

int main()
{
	lli t,i,j;
	vector<lli>ans;
	string str;
	lli ans2=0;
	cin>>t;
	for(i=0;i<t;i++)
	{

		cin>>str;
		if(str.find('.')==-1)
			ans2=1;
		else
		{
			int k=str.find(".");
			// cout<<k<<endl;
			lli l=str.length();
			// cout<<l<<endl;
			lli m=l-k-1;
			lli n=convert(str);
			// cout<<n<<endl;
			// lli p=(lli)(n*(int)pow(10,m));
			 // cout<<p<<endl;
			lli a=(int)pow(10,m);
			 // cout<<a<<endl;
			// lli b=p/(int)pow(10,m);
			 // cout<<b<<endl;
			// cout<<a<<" "<<p<<endl;
			lli g=gcd(a,n);
			ans2=a/g;
		}

			ans.push_back(ans2);



		}
	
		for(i=0;i<ans.size();i++)
			cout<<ans[i]<<endl;




	}
lli gcd(lli a,lli b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
lli convert(string s)
{
	lli i,j;
	lli num=0,num2=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]!='.')
			num=num*10+(s[i]-48);
		// else
		// {
		// 	j=i;
		// 	break;
		// }

	}
	// for(i=j+1;i<s.length();i++)
	// {
	// 	num2=num2*10+((s[i]-48));
	// }
	// int p=s.length()-j-1;
	// num2=num2/(int)pow(10,p);
	// num=num+num2;
	return num;

}
