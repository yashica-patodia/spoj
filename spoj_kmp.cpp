#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string s1,s2;
	while(t--)
	{
		cin>>s1>>s2;
		if(s2.length()>s1.length())
			cout<<"Not Found"<<endl;
		else
		{
			vector<int>lps(s2.length()+1);
			lps[0]=0;
			int i=1,len=0;
			while(i<s2.length())
			{
				if(s2[i]==s2[len])
				{
					len++;
					lps[i]=len;
					i++;
				}
				else
				{
					if(len!=0)
						len=lps[len-1];
					else
					{
						lps[i]=0;
						i++;
					}
				}
			}
			int l1=s1.length();
			int l2=s2.length();
			vector<int>vec(l1);
			i=0;
			int j=0,p;
			int index=0;
			while(i<l1)
			{
				if(s2[j]==s1[i])
				{
					i++;
					j++;
				}
				if(j==l2)
				{
					vec[index++]=(i-j+1);
					j=lps[j-1];

				}
				else if(i<l1 && s2[j]!=s1[i])
				{
					if(j!=0)
						j=lps[j-1];
					else
						i++;
				}
			}
			if(index>0)
			{
			cout<<index<<endl;
			for(p=0;p<index;p++)
				cout<<vec[p]<<" ";
			}
			else
			{
				cout<<"Not Found";
			}
			cout<<endl;

		}
	}
}