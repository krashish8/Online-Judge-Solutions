/*
Problem Name: A - Bit++
Problem ID: 282A
Problem URL: https://codeforces.com/contest/282/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38762060
Solution Time: 2018-05-30 09:26:38
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n,x=0;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		string s;
		cin>>s;
		if(s=="++X" || s=="X++") x=x+1;
		if(s=="--X" || s=="X--") x=x-1;
	}
	cout<<x;
	return 0;
}