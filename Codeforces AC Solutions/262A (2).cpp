/*
Problem Name: A - Roma and Lucky Numbers
Problem ID: 262A
Problem URL: https://codeforces.com/contest/262/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38770999
Solution Time: 2018-05-30 14:38:00
Language: GNU C++14
Time consumed: 60 ms
Memory consumed: 3600 KB
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int n,k,d=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		int a,b,c=0;
		cin>>a;
		while(a!=0)
		{
			b=a%10;
			a=a/10;
			if(b==7 || b==4)
				c++;
		}
		if(c<=k) d++;
	}
	cout<<d;
	return 0;
}