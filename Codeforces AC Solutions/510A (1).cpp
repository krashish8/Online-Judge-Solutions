/*
Problem Name: A - Fox And Snake
Problem ID: 510A
Problem URL: https://codeforces.com/contest/510/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38625449
Solution Time: 2018-05-26 09:34:35
Language: GNU C++14
Time consumed: 15 ms
Memory consumed: 0 KB
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i%2!=0)
			{
				cout<<"#";
			}
			else if(i%4!=0)
			{
				if(j<m)
					cout<<".";
				else
					cout<<"#";
			}
			else if(i%4==0)
			{
				if(j==1)
					cout<<"#";
				else
					cout<<".";
			}
		}
		cout<<"\n";
	}
	return 0;
}