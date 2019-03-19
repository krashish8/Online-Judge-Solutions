/*
Problem Name: A - Olesya and Rodion
Problem ID: 584A
Problem URL: https://codeforces.com/contest/584/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38807010
Solution Time: 2018-05-31 18:45:07
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n,t;
	cin>>n>>t;
	if(t==10 && n<=1)
	{
		cout<<"-1";
		return 0;
	}
	if(t==10 && n>1)
	{
		for(int i=1;i<n;i++)
			cout<<1;
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++)
	cout<<t;
	return 0;
}