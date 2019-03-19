/*
Problem Name: A - Diverse Team
Problem ID: 988A
Problem URL: https://codeforces.com/contest/988/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38839648
Solution Time: 2018-06-01 17:55:56
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
	int n,k;
	cin>>n>>k;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j]) a[j]=-1;
		}
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==-1) c++;
	}
	int p=1;
	if(k<=(n-c))
	{
		cout<<"YES\n";
		for(int i=0;i<n;i++)
		{
			if(a[i]!=-1 && p<=k)
			{
				cout<< i+1 <<" ";
				p++;
			}
		}
	}
	else
		cout<<"NO";
	return 0;
}