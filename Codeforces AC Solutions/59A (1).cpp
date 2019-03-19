/*
Problem Name: A - Word
Problem ID: 59A
Problem URL: https://codeforces.com/contest/59/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38802208
Solution Time: 2018-05-31 15:43:28
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
	string s;
	cin>>s;
	int c=0,l=s.length();
	for(int i=0;i<l;i++)
	{
		if(!(s[i]>=65 && s[i]<=90)) c++;
	}
	for(int i=0;i<l;i++)
	{
		if(c*2==l || c*2>l)
		{
			if(s[i]>=65 && s[i]<=90) s[i]+=32;
			cout<<s[i];
		}
		if(c*2<l)
		{
			if(!(s[i]>=65 && s[i]<=90)) s[i]-=32;
			cout<<s[i];
		}
	}
	return 0;
}