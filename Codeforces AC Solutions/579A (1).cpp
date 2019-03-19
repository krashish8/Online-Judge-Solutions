/*
Problem Name: A - Raising Bacteria
Problem ID: 579A
Problem URL: https://codeforces.com/contest/579/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38808732
Solution Time: 2018-05-31 19:48:36
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
//	freopen("input.txt","r",stdin);
	int n,c=0;
	cin>>n;
	while(n!=0) {
	while(n%2==0)
	{
		n/=2;
	}
	c++;
	n-=1;
	}
		cout<<c;
	return 0;
}