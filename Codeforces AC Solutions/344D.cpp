/*
Problem Name: D - Alternating Current
Problem ID: 344D
Problem URL: https://codeforces.com/contest/344/problem/D
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38998789
Solution Time: 2018-06-06 18:41:18
Language: GNU C++14
Time consumed: 60 ms
Memory consumed: 400 KB
*/
#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false);	cin.tie(NULL);
#define ll long long int

int main()
{
	//freopen("input.txt","r",stdin);
	speed;

	string s;
	cin>>s;
	if(s.length()%2!=0)
	{
		cout<<"No";
		return 0;
	}
	else
	{
		stack<char> st;
		int pr=&#39;o&#39;;
		for(int i=0;i<s.length();i++)
		{
			if(st.empty()) pr=&#39;o&#39;;
			if(!st.empty()) pr=st.top();
			st.push(s[i]);
			if(pr==st.top())
			{
				st.pop();
				st.pop();
			}
		}
		if(st.empty()) cout<<"Yes";
		else cout<<"No";
	}
    return 0;
}