/*
Problem Name: A - Giga Tower
Problem ID: 488A
Problem URL: https://codeforces.com/contest/488/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38777781
Solution Time: 2018-05-30 18:16:14
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
	while(true)
	{
		a++;
		c++;
		int n=a>=0?a:-a,ld;
		while(n!=0)
		{
			ld=n%10;
			n=n/10;
			if(ld==8)
				goto out;
		}
	}
	out:
	cout<<c;
	return 0;
}