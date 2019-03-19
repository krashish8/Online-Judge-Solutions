/*
Problem Name: A - Multiplication Table
Problem ID: 577A
Problem URL: https://codeforces.com/contest/577/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38624832
Solution Time: 2018-05-26 09:13:57
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 300 KB
*/
#include <iostream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	long long n,x,c=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		if(x%i==0 && x/i<=n)
			c++;
	}
	cout<<c;
	return 0;
}