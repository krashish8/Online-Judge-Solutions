/*
Problem Name: A - Petya and Strings
Problem ID: 112A
Problem URL: https://codeforces.com/contest/112/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38780123
Solution Time: 2018-05-30 19:47:34
Language: GNU C++14
Time consumed: 92 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	string a,b;
	cin>>a>>b;
	int flag=0;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]<=90) a[i]+=32;
		if(b[i]<=90) b[i]+=32;
		if(a[i]!=b[i])
		{
			a[i]<b[i]?cout<<"-1":cout<<"1";
			flag=1;
			break;
		}
	}
	if(flag==0) cout<<"0";
	return 0;
}