/*
Problem Name: B - Lost Array
Problem ID: 1043B
Problem URL: https://codeforces.com/contest/1043/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 45009624
Solution Time: 2018-10-28 19:30:15
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
	//freopen("input.txt", "r", stdin);
	IOS;

	int n;
	cin>>n;
	int a[n+1];
	int b[n];
	a[0]=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i+1];
		b[i]=a[i+1]-a[i];
	}
	
	vector<int> v;
	int i=0;
	for(int j=1;j<n-i;j++) {
		while(i+j<n && b[i+j]==b[i]){
			i++;
		}
		if(i+j==n) v.pb(j);
		i=0;
	}
	v.pb(n);
	cout<<v.size()<<endl;;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}