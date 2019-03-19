/*
Problem Name: A - IQ test
Problem ID: 25A
Problem URL: https://codeforces.com/contest/25/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 45145936
Solution Time: 2018-10-31 19:52:51
Language: GNU C++14
Time consumed: 62 ms
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
	//freopen("input.txt", "r", stdin);
	IOS;

	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int c1=0,c2=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]%2==0) c1++;
		else c2++;
	}
	int flag;
	if(c1==1) flag=0;
	if(c2==1) flag=1;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]%2==flag) return(cout<<i+1,0);
	}
	return 0;
}