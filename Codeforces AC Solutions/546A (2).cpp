/*
Problem Name: A - Soldier and Bananas
Problem ID: 546A
Problem URL: https://codeforces.com/contest/546/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38622931
Solution Time: 2018-05-26 07:41:24
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 0 KB
*/
#include <iostream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int k,n,w,c=0;
	scanf("%d %d %d",&k,&n,&w);
	for(int i = 1;i<=w;i++)
	{
		c = c + i*k;
	}
	if(c>n)
	    printf("%d",(c-n));
	else
	    printf("0");
	return 0;
}