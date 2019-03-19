/*
Problem Name: A - Bear and Elections
Problem ID: 574A
Problem URL: https://codeforces.com/contest/574/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38790438
Solution Time: 2018-05-31 08:08:29
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
	int n;
	cin>>n;
	int a[n],m,p,c=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	a: m=a[0];
	p=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>=m)
		{
			m=a[i];
			p=i;
		}
	}
	if(p!=0)
	{
		a[0]++;
		a[p]--;
		c++;
		goto a;
	}
	else
		cout<<c;
}