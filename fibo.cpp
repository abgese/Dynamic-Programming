#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int f[5001][1002];
vector<string> fib;
void fibgen()
{
	int i,j,k;
	string a;
	f[1][1001]=f[2][1001]=1;
	fib.push_back("0");
	fib.push_back("1");
	fib.push_back("1");
	for(i=3;i<5000;i++)
	{a="";
      
		for(j=1001;j>=0;j--)
		{
			f[i][j]+=f[i-1][j]+f[i-2][j];
			if(f[i][j]>9)
			{
				if(j!=0);
				f[i][j-1]+=f[i][j]/10;
				f[i][j]%=10;
			}
		}
		f[i][0]=0;
		for(k=0;;k++)
			if(f[i][k]!=0)
				break;
		for(j=k;j<=1001;j++)
		{
			char c=(char)(f[i][j]+48);
			a+=c;

		}
		fib.push_back(a);
	}


}
int main()
{
	int t;
	int i,j;
	string a;
	
	fibgen();
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a;
		if(find(fib.begin(),fib.end(),a)==fib.end())
			cout<<"Not a Fibonacci\n";
		else
			cout<<"Is a Fibonacci\n";
	}

}