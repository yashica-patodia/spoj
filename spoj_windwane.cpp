#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
struct update
{
	int x1,x2,y1,y2;
	int dir;
};
int m,n;
void find(int x,int y,vector<update>& vec, char mat[][1010]);
int main()
{
	int t,i,j;
	vector<update>vec;
	cin>>m>>n;
	char mat[1010][1010];
	for(i=1;i<=m;i++)
	{
		string s;
		cin>>s;
		for(j=0;j<n;j++)
		{
			mat[i][j+1]=s[j];
		}
	}
	cin>>t;
	char ch;
	update temp;
	for(i=1;i<=t;i++)
	{
		cin>>ch;
		if(ch=='C')
		{
			cin>>temp.x1>>temp.y1>>temp.x2>>temp.y2>>temp.dir;
			vec.push_back(temp);



		}
		else
		{
			int x,y;
			cin>>x>>y;
			find(x,y,vec,mat);
		}

	}

}
void find(int x,int y,vector<update>& vec, char mat[][1010])
{
	int rot=0,i;
	for(i=0;i<vec.size();i++)
	{
		update temp=vec[i];
		if(x>=temp.x1 && x<=temp.x2 && y>=temp.y1 && y<=temp.y2)
		{
			if(temp.dir)
				rot-=1;
			else
				rot+=1;
		}
	}
	 int rotate=rot%4;
	 if(rotate<0)
	 	rotate=4+rotate;
	 char init=mat[x][y];
	 if(init=='N')
	 {
	 	if(rotate==0)
	 		cout<<"N"<<endl;

	 	if(rotate==1)
	 			cout<<"E"<<endl;
	 	if(rotate==2)
	 			cout<<"S"<<endl;
	 	if(rotate==3)
	 		cout<<"W"<<endl;
	  }
	   if(init=='E')
	 {
	 	if(rotate==0)
	 		cout<<"E"<<endl;

	 	if(rotate==1)
	 			cout<<"S"<<endl;
	 	if(rotate==2)
	 			cout<<"W"<<endl;
	 	if(rotate==3)
	 		cout<<"N"<<endl;
	  }
	   if(init=='S')
	 {
	 	if(rotate==0)
	 		cout<<"S"<<endl;

	 	if(rotate==1)
	 			cout<<"W"<<endl;
	 	if(rotate==2)
	 			cout<<"N"<<endl;
	 	if(rotate==3)
	 		cout<<"E"<<endl;
	  }
	   if(init=='W')
	 {
	 	if(rotate==0)
	 		cout<<"W"<<endl;

	 	if(rotate==1)
	 			cout<<"N"<<endl;
	 	if(rotate==2)
	 			cout<<"E"<<endl;
	 	if(rotate==3)
	 		cout<<"S"<<endl;
	  }

}