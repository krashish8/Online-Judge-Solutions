/*
Problem Name: A - Appleman and Easy Task
Problem ID: 462A
Problem URL: https://codeforces.com/contest/462/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38803783
Solution Time: 2018-05-31 16:39:45
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	char a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	int d=0;
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(a[i+1][j]==&#39;o&#39; && i+1>=0 && i+1<n) c++;
			if(a[i][j+1]==&#39;o&#39; && j+1>=0 && j+1<n) c++;
			if(a[i-1][j]==&#39;o&#39; && i-1>=0 && i-1<n) c++;
			if(a[i][j-1]==&#39;o&#39; && j-1>=0 && j-1<n) c++;
			if(c%2==0) d++;
		}
	}
	if(d==n*n) cout<<"YES";
	else cout<<"NO";
	return 0;
}