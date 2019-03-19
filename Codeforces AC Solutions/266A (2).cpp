/*
Problem Name: A - Stones on the Table
Problem ID: 266A
Problem URL: https://codeforces.com/contest/266/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38765446
Solution Time: 2018-05-30 11:27:22
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 3400 KB
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int l;
	cin>>l;
	string s,t="";
	cin>>s;
	t=t+s[0];
	for(int i=1;i<l;i++)
	{
		if(t[t.length()-1]!=s[i])
		t=t+s[i];
	}
	cout<<s.length()-t.length();
	return 0;
}