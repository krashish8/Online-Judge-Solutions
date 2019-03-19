/*
Problem Name: A - Theatre Square
Problem ID: 1A
Problem URL: https://codeforces.com/contest/1/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38780574
Solution Time: 2018-05-30 20:07:25
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	long long n,m,a;
	cin>>n>>m>>a;
	if(n%a==0 && m%a==0)
	cout<<(n/a)*(m/a);
	else if(n%a==0)
	cout<<(n/a)*(m/a+1);
	else if(m%a==0)
	cout<<(n/a+1)*(m/a);
	else
	cout<<(n/a+1)*(m/a+1);
	return 0;
}