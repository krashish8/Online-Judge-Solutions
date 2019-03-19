/*
Problem Name: A - cAPS lOCK
Problem ID: 131A
Problem URL: https://codeforces.com/contest/131/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39082183
Solution Time: 2018-06-10 06:24:21
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 0 KB
*/
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
	//freopen("input.txt","r",stdin);
	speed;

	string s;
	cin>>s;
	int l=s.length(),f1=0,f2=0,c1=0,c2=0;
	for(int i=0;i<l;i++)
	{
		if(s[i]>=65 && s[i]<=90)
			c1++;
		if(i!=0 && (s[i]>=65 && s[i]<=90))
			c2++;
	}
	if(c1==l) f1=1;
	if(c1==l-1 && (s[0]>=97 && s[0]<=122)) f2=1;
	if(f1==1)
	{
		for(int i=0;i<l;i++)
			s[i]+=32;
	}
	if(f2==1)
	{
		for(int i=1;i<l;i++)
			s[i]+=32;
		s[0]-=32;
	}
	cout<<s;
    return 0;
}