/*
Problem Name: A - Initial Bet
Problem ID: 478A
Problem URL: https://codeforces.com/contest/478/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38804246
Solution Time: 2018-05-31 16:58:18
Language: GNU C++14
Time consumed: 15 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		int flag=0;
		for(int j=i+1;j<5;j++)
		{
			if(a[i]-a[j]>1)
			{
				a[i]--; a[j]++;
			}
			else if(a[j]-a[i]>1)
			{
				a[j]--; a[i]++;
			}
		}
		for(int j=i+1;j<5;j++)
		{
			if(a[i]-a[j]>1 || a[j]-a[i]>1) flag=1;
		}
		if(flag==1) i--;
	}
	int flag=0;
	for(int i=0;i<5;i++)
	{
		if(a[0]==a[i]) flag++;
	}
	if(flag==5 && a[0]!=0) cout<<a[0];
	else cout<<"-1";
	return 0;
}