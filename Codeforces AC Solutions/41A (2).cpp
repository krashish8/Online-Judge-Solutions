/*
Problem Name: A - Translation
Problem ID: 41A
Problem URL: https://codeforces.com/contest/41/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38625061
Solution Time: 2018-05-26 09:21:26
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	string a,b;
	int c=0;
	cin>>a>>b;
	if(a.length()==b.length())
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]==b[a.length()-i-1])
				c++;
		}
		if(c==a.length())
			cout<<"YES";
		else
			cout<<"NO";
	}
	else
		cout<<"NO";
	return 0;
}