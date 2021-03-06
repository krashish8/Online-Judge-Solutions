/*
Problem Name: A - Mishka and Contest
Problem ID: 999A
Problem URL: https://codeforces.com/contest/999/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39466711
Solution Time: 2018-06-21 17:40:56
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 3900 KB
*/
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<vector>
#include<sstream>
using namespace std;


typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long int ll;

#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end()) 
#define se second
#define fi first
#define sz(a) int((a).size())
#define mp make_pair 
#define pb push_back 
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define exectime() cout<<"Execution Time: "<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;

#define INF 1e18;
#define PI 3.14159265359
#define EPS 1e-9
#define MOD 1000000007

int a[1000005];

int main() {
	//freopen("input.txt", "r", stdin);
	speed;
	//clock_t tStart = clock();

	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int t1=0,t2=-1;
	for(int i=0;i<n;i++) {
		if(a[i]>k) {t1=i; break;}
	}
	for(int i=n-1;i>=0;i--) {
		if(a[i]>k) {t2=i; break;}
	}
	cout<<n-(t2-t1+1);
}