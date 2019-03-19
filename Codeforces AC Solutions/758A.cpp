/*
Problem Name: A - Holiday Of Equality
Problem ID: 758A
Problem URL: https://codeforces.com/contest/758/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38763108
Solution Time: 2018-05-30 10:02:45
Language: GNU C++14
Time consumed: 15 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n,s=0;
	cin>>n;
	int a[n];
	cin>>a[0];
	int m=a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		m=max(m,a[i]);
	}
	for(int i=0;i<n;i++)
	{
		s=s+m-a[i];
	}
	cout<<s;
	return 0;
}