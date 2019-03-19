/*
Problem Name: A - Elephant
Problem ID: 617A
Problem URL: https://codeforces.com/contest/617/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38778223
Solution Time: 2018-05-30 18:33:11
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int a,c=0;
	cin>>a;
	for(int i=5;i>=1;i--)
	{
		while(a>=i)
		{
			a-=i;
			c++;
		}
	}
	cout<<c;
	return 0;
}