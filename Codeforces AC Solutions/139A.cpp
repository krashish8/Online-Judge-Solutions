/*
Problem Name: A - Petr and Book
Problem ID: 139A
Problem URL: https://codeforces.com/contest/139/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38808387
Solution Time: 2018-05-31 19:34:58
Language: GNU C++14
Time consumed: 60 ms
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
	int s=0,flag=0,i,a[7];
	for(i=0;i<7;i++)
	{
		cin>>a[i];
	}
	a: for(i=0;i<7;i++)
	{
		s+=a[i];
		if(s>=n)
		{
			flag=1;
			break;
		}
	}
	if(flag==1) cout<<i+1;
	else goto a;
	return 0;
}