/*
Problem Name: A - Buy a Shovel
Problem ID: 732A
Problem URL: https://codeforces.com/contest/732/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38802282
Solution Time: 2018-05-31 15:45:32
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int k,r;
	cin>>k>>r;
	for(int i=1;true;i++)
	{
		if(k*i%10==r ||k*i%10==0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}