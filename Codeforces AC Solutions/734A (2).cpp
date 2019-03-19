/*
Problem Name: A - Anton and Danik
Problem ID: 734A
Problem URL: https://codeforces.com/contest/734/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38765439
Solution Time: 2018-05-30 11:27:02
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 3500 KB
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int l;
	cin>>l;
	string s;
	cin>>s;
	int a=0,b=0;
	for(int i=0;i<l;i++)
	{
		if(s[i]==&#39;A&#39;) a++;
		if(s[i]==&#39;D&#39;) b++;
	}
	if(a>b) cout<<"Anton";
	if(b>a) cout<<"Danik";
	if(b==a) cout<<"Friendship";
	return 0;
}