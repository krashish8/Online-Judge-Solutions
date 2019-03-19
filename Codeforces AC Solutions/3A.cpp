/*
Problem Name: A - Shortest path of the king
Problem ID: 3A
Problem URL: https://codeforces.com/contest/3/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38807828
Solution Time: 2018-05-31 19:13:59
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	string s,t;
	cin>>s>>t;
	int c=0;
	string n[8];
	while(s[0]!=t[0] && s[1]!=t[1])
	{
		if(s[0]>t[0])
		{
			if(s[1]>t[1])
			{
				s[1]--;
				n[c]="LD";
				c++;
			}
			else
			{
				s[1]++;
				n[c]="LU";
				c++;
			}
			s[0]--;
		}
		else
		{
			s[0]++;
			if(s[1]>t[1])
			{
				s[1]--;
				n[c]="RD";
				c++;
			}
			else
			{
				s[1]++;
				n[c]="RU";
				c++;
			}
		}

	}
	if(s[0]==t[0])
	{
		while(s[1]!=t[1])
		{
			if(s[1]>t[1])
			{
				s[1]--;
				n[c]="D";
				c++;
			}
			else
			{
				s[1]++;
				n[c]="U";
				c++;
			}
		}
	}
	if(s[1]==t[1])
	{
		while(s[0]!=t[0])
		{
			if(s[0]>t[0])
			{
				s[0]--;
				n[c]="L";
				c++;
			}
			else
			{
				s[0]++;
				n[c]="R";
				c++;
			}
		}
	}
	cout<<c<<endl;
	for(int i=0;i<c;i++)
	{
		cout<<n[i]<<endl;
	}
	return 0;
}