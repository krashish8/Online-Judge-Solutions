/*
Problem Name: A - Black Square
Problem ID: 431A
Problem URL: https://codeforces.com/contest/431/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38808092
Solution Time: 2018-05-31 19:23:35
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 3500 KB
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	string s;
	cin>>s;
	int su=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==&#39;1&#39;) su+=a;
		if(s[i]==&#39;2&#39;) su+=b;
		if(s[i]==&#39;3&#39;) su+=c;
		if(s[i]==&#39;4&#39;) su+=d;
		
	}
	cout<<su;
	return 0;
}