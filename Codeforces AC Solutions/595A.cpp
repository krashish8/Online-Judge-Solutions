/*
Problem Name: A - Vitaly and Night
Problem ID: 595A
Problem URL: https://codeforces.com/contest/595/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38778581
Solution Time: 2018-05-30 18:44:53
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n,m,c=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2*m;j++)
		{
			int a;
			cin>>a;
			if(j%2==1)
			{
				if(a==1)
				{
					cin>>a;
					j++;
					c++;
				}
			}
			else if(a==1)
				c++;
		}

	}
	cout<<c;
	return 0;
}