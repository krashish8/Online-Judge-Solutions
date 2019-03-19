/*
Problem Name: A - Antipalindrome
Problem ID: 981A
Problem URL: https://codeforces.com/contest/981/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38762289
Solution Time: 2018-05-30 09:35:30
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
	string a,b="";
	cin>>a;
	int c,l=a.length(),flag=0;
	for(int i = 0;i<l;i++)
	{
		b=a[i]+b;
		for(int j = i+1;j<l;j++)
		{
			if(a[i]==a[j]) flag++;
		}
	}
	if(a==b) 
	{
		if(flag==l*(l-1)/2) cout<<"0";
		else cout<<l-1;
	}
	else cout<<l;
	return 0;
}