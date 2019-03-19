/*
Problem Name: A - Vladik and flights
Problem ID: 743A
Problem URL: https://codeforces.com/contest/743/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38778858
Solution Time: 2018-05-30 18:55:16
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 3500 KB
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n,a,b;
	cin>>n>>a>>b;
	string s;
	cin>>s;
	if(s[a-1]==s[b-1]) cout<<"0";
	else cout<<"1";
	return 0;
}