/*
Problem Name: A - I_love_\%username\%
Problem ID: 155A
Problem URL: https://codeforces.com/contest/155/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38613937
Solution Time: 2018-05-25 19:07:34
Language: GNU C++17 Diagnostics
Time consumed: 1994 ms
Memory consumed: 0 KB
*/
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int s,l;
	int b,c=0;
	cin>>b;
	s=b;
	l=b;
	for(int i=1;i<n;i++)
	{
		int a;
		cin>>a;
		if(a<s || a>l)
			c++;
		s=min(a,s);
		l=max(a,l);
	}
	cout<<c;
	return 0;
}