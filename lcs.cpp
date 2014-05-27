#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int lcs(string a,string b)
{
	int x,y,i,j;
	int seqsum[100001];
	int n=a.length();
	int m=b.length();
	for(i=0;i<=n;i++)
	{
		x=y=0;
		for(j=0;j<=m;j++)
		{
			if(i==0||j==0)
			{
				seqsum[j]=0;
			}
			else
			{

				if(a[i]==b[j])
				{
					x=seqsum[j];
					seqsum[j]=y+1;
					y=x;
				}
				else
				{
					y=seqsum[j];
                    seqsum[j]=max(seqsum[j-1],seqsum[j]); 
				}
			}
		}
		
	}
	return seqsum[m];
}
int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	int x=lcs(a,b);
	cout<<x<<"\n";
	return 0;
}