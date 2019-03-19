/*
Problem Name: A - Hulk
Problem ID: 705A
Problem URL: https://codeforces.com/contest/705/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38623000
Solution Time: 2018-05-26 07:45:26
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include <iostream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		if(i%2!=0)
			cout<<"I hate";
		else
			cout<<"I love";
		if(i<n)
			cout<<" that ";
		if(i==n)
			cout<<" it";

	}
	return 0;
}