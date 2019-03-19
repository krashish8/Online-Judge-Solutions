/*
Problem Name: B - A and B and Compilation Errors
Problem ID: 519B
Problem URL: https://codeforces.com/contest/519/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39168594
Solution Time: 2018-06-11 19:34:48
Language: GNU C++14
Time consumed: 109 ms
Memory consumed: 0 KB
*/
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define debug(n1) cout<<n1<<endl
#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end()) 
#define se second
#define fi first
#define sz(a) int((a).size()) 
#define pb push_back 
#define endl "\n"

int main()
{
	//freopen("input.txt", "r", stdin);
	speed;

	int n;
	cin>>n;
	int s1=0,s2=0,s3=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		s1+=a;
	}
	for(int i=0;i<n-1;i++)
	{
		int a;
		cin>>a;
		s2+=a;
	}
	for(int i=0;i<n-2;i++)
	{
		int a;
		cin>>a;
		s3+=a;
	}
	cout<<s1-s2<<endl<<s2-s3;
    return 0;
}