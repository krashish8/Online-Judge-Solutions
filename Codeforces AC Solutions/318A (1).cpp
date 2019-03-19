/*
Problem Name: A - Even Odds
Problem ID: 318A
Problem URL: https://codeforces.com/contest/318/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38624411
Solution Time: 2018-05-26 08:57:38
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include <iostream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	long long n,k;
	cin>>n>>k;
	if(n%2==0)
	{
		if(k<=n/2)
		{
			cout<<(2*k-1);
		}
		else
			cout<<(k-n/2)*2;
	}
	else
	{
		if(k<=(n+1)/2)
		{
			cout<<(2*k-1);
		}
		else
		{
			cout<<(k-(n+1)/2)*2;
		}
	}
	return 0;
}