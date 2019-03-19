/*
Problem Name: A - Valera and X
Problem ID: 404A
Problem URL: https://codeforces.com/contest/404/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44894938
Solution Time: 2018-10-26 09:08:47
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include<iomanip>
//#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define inf 2e9+9
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define mi map<int,int>
#define mii map<pii,int>
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define ubnd upper_bound()
#define bs binary_search()
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
//	freopen("input.txt", "r", stdin);
	IOS;

	int n;
	cin>>n;
	string s;
	cin>>s;
	char a=s[0];
	char b=s[1];
	string t="";
	for (int j = 0; j < n; ++j)
	{
		if(j==0 || j==n-1) t+=a;
		else  t+=b;
	}
	if(t!=s || a==b) {
		cout<<"NO";
		return 0;
	}
	for(int i=1;i<n;i++) {
		t="";
		cin>>s;
		for (int j = 0; j < n; ++j)
		{
			if(j==i || j==n-i-1) t+=a;
			else  t+=b;
		}
		if(t!=s) {
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}