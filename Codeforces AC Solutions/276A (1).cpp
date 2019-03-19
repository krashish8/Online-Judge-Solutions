/*
Problem Name: A - Lunch Rush
Problem ID: 276A
Problem URL: https://codeforces.com/contest/276/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38802954
Solution Time: 2018-05-31 16:08:58
Language: GNU C++14
Time consumed: 122 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	int f,t,j;
	cin>>f>>t;
	if(t>k) j=f-(t-k);
	else j=f;
	for(int i=1;i<n;i++)
	{
		cin>>f>>t;
		if(t>k) j=max(f-(t-k),j);
		else j=max(f,j);
				
	}
	cout<<j;
	return 0;
}