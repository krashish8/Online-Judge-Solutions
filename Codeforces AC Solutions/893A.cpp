/*
Problem Name: A - Chess For Three
Problem ID: 893A
Problem URL: https://codeforces.com/contest/893/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44892595
Solution Time: 2018-10-26 07:20:42
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
#define fi first
#define se second
#define mod 1000000007
#define inf 2e9+9
#define pi pair<ll,ll>
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int a[105];
int b[5];

int main(){
	//freopen("input.txt", "r", stdin);
	IOS;

	int n;
	cin>>n;
	int temp=0;

	b[1]=1;
	b[2]=1;

	for (int i = 0; i < n; ++i)
	{
		int p;
		cin>>p;
		if(b[p]!=1) temp=1;
		else {
			if(p==1) {
				if(b[2]==0) {b[2]=1; b[3]=0;}
				else {b[3]=1; b[2]=0;}
			}
			if(p==2)
			{
				if(b[1]==0) {b[1]=1; b[3]=0;}
				else {b[3]=1; b[1]=0;}
			}
			if(p==3)
			{
				if(b[1]==0) {b[1]=1; b[2]=0;}
				else {b[2]=1; b[1]=0;}
			}
		}
	}
	if(temp==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}