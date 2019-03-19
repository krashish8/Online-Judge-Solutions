/*
Problem Name: A - Commentary Boxes
Problem ID: 990A
Problem URL: https://codeforces.com/contest/990/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39092684
Solution Time: 2018-06-10 13:17:30
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

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



int main()
{
	//freopen("input.txt","r",stdin);
	speed;
	
	ll n,m;
	int a,b;
	cin>>n>>m>>a>>b;
	ll c,d;
	if(n%m==0)
	{
		cout<<0;
		return 0;
	}
	d = n - (n/m) *m;
	c = (n/m+1)*m - n;

	ll c1,c2;
	c1=a*c;
	c2=b*d;
	if(c1<=c2) cout<<c1;
	else cout<<c2;
    return 0;
}