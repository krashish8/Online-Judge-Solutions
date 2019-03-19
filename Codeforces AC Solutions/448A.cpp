/*
Problem Name: A - Rewards
Problem ID: 448A
Problem URL: https://codeforces.com/contest/448/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39450546
Solution Time: 2018-06-21 06:55:12
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 0 KB
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
#define mod 1000000007
#define eps 1e-9
#define rep(i,a,b) for (int i = a; i <= b; i++)
const int INF = 0x3f3f3f3f;


int main() {
	//freopen("input.txt", "r", stdin);
	speed;

	
	int a1,a2,a3,b1,b2,b3,n,a,b;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	a=a1+a2+a3;
	b=b1+b2+b3;
	while(1) {
		while(a!=0) {
			if(a>=5) { a-=5; n--;}
			else {a=0; n--;}
		}
		while(b!=0) {
			if(b>=10) {b-=10; n--;}
			else { b=0; n--;}
		}
		if(n>=0) {cout<<"YES";return 0;}
		else {cout<<"NO"; return 0;}
	}

}