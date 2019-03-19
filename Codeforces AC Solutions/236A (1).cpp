/*
Problem Name: A - Boy or Girl
Problem ID: 236A
Problem URL: https://codeforces.com/contest/236/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38624687
Solution Time: 2018-05-26 09:09:03
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
	string a;
	int c=0;
	cin>>a;
	for(int j=97;j<=122;j++)
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]==j)
			{
				c++;
				break;
			}
		}
	}
	if(c%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;
}