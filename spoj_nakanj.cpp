#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli dis[9][9][9][9];
int dx[8]={2,1,-1,-2,-2,-1,1,2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};
lli bfs(int x1,int y1,int x2,int y2);

int main()
{
	int t;
	int x1,y1,x2,y2,i,j,k,l;
	cin>>t;
	string s,s2;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			for(k=1;k<=8;k++)
			{
				for(l=1;l<=8;l++)
					dis[i][j][k][l]=-1;
			}
		}
	}
	while(t--)
	{
		cin>>s>>s2;
		// cout<<s;
		x1=s[0]-'a'+1;
		y1=s[1]-'0';
		x2=s2[0]-'a'+1;
		y2=s2[1]-'0';
		// cout<<x1<<" "<<y1<<endl;
		cout<<bfs(x1,y1,x2,y2)<<endl;



	}
}
lli bfs(int x1,int y1,int x2,int y2)
{
	int i;
	if(dis[x1][y1][x2][y2]!=-1)
		return dis[x1][y1][x2][y2];
	if(dis[x2][y2][x1][y1]!=-1)
		return dis[x2][y2][x1][y1];
	bool vis[9][9]={};
	queue<pair<lli,pair<int,int> > >q;
	pair<int,pair<int,int> >temp;
	dis[x1][y1][x2][y2]=0;
	vis[x1][y1]=true;
	q.push(make_pair(0,make_pair(x1,y1)));
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
	int	a=temp.second.first;
	int	b=temp.second.second;
	lli	level=temp.first;
	// cout<<a<<" "<<b<<" "<<level<<endl;
		dis[x1][y1][a][b]=level;
		for(i=0;i<8;i++)
		{
		int	a1=a+dx[i];
		int	b1=b+dy[i];
			if(a1>=1 && a1<=8 && b1>=1 && b1<=8 && !vis[a1][b1])
			{
				vis[a1][b1]=true;
				q.push(make_pair(level+1,make_pair(a1,b1)));

			}
		}
	}
	return dis[x1][y1][x2][y2];


}