/*
Problem Name: A - Soft Drinking
Problem ID: 151A
Problem URL: https://codeforces.com/contest/151/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38802707
Solution Time: 2018-05-31 15:59:49
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n,k,l,c,d,p,nl,ppp;
	cin>>n>>k>>l>>c>>d>>p>>nl>>ppp;
	int ans=min(min(k*l/nl, c*d), p/ppp);
	cout<<(ans/n);
	return 0;
}