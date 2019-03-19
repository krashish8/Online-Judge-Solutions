/*
Problem Name: A - Insomnia cure
Problem ID: 148A
Problem URL: https://codeforces.com/contest/148/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44699363
Solution Time: 2018-10-22 17:12:37
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 400 KB
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
#define pi pair<int,int>
#define endl "\n"
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
//	freopen("input.txt", "r", stdin);
	IOS;

	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int a[d]={0};
	for(int i=1;i<=d;i++) {
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0) a[i]=1;
	}
	int c=0;
	for(int i=1;i<=d;i++) {
		if(a[i]==1) c++;
	}
	cout<<c;
}