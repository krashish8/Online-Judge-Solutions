/*
Problem Name: A - Young Physicist
Problem ID: 69A
Problem URL: https://codeforces.com/contest/69/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38622765
Solution Time: 2018-05-26 07:30:37
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include <iostream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n;
	scanf("%d",&n);
	int s1=0,s2=0,s3=0;
	for(int i=1;i<=n;i++)
	{
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		s1+=x;s2+=y;s3+=z;
	}
	if(s1==0 && s2==0 && s3==0)
		printf("YES");
	else
		printf("NO");
	return 0;
}