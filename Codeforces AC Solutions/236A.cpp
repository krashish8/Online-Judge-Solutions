/*
Problem Name: A - Boy or Girl
Problem ID: 236A
Problem URL: https://codeforces.com/contest/236/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46441220
Solution Time: 2018-12-01 15:03:03
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)



int main(){
   // freopen("input.txt", "r", stdin);
    IOS;
    
    string a;
	int c=0;
	cin>>a;
	for(int j=97;j<=122;j++)
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]==j)
			{
				c++;
				break;
			}
		}
	}
	if(c%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;
}