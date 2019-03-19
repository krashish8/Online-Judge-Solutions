/*
Problem Name: A - Design Tutorial: Learn from Math
Problem ID: 472A
Problem URL: https://codeforces.com/contest/472/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38770805
Solution Time: 2018-05-30 14:30:37
Language: GNU C++14
Time consumed: 15 ms
Memory consumed: 3600 KB
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int a=0,b=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0) a++;
		}
		for(int j=1;j<=n-i;j++)
		{
			if((n-i)%j==0) b++;
		}
		if(a>2 && b>2)
		{
			cout<<i<<" "<<n-i;
			return 0;
		}
	}
}