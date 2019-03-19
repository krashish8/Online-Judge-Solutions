/*
Problem Name: A - Rounding
Problem ID: 898A
Problem URL: https://codeforces.com/contest/898/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38625225
Solution Time: 2018-05-26 09:27:00
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	long long n;
	cin>>n;
	if(n%10==5)
		cout<<n+5;
	if(n%10==0)
		cout<<n;
	if(n%10<5 && n%10!=0)
		cout<<n-n%10;
	if(n%10>5)
		cout<<n-n%10+10;
	return 0;
}