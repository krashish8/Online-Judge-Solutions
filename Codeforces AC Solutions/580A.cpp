/*
Problem Name: A - Kefa and First Steps
Problem ID: 580A
Problem URL: https://codeforces.com/contest/580/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39523882
Solution Time: 2018-06-22 20:36:47
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 400 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
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
#define dbg(x) { cout<< #x << ": " << (x) ; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }

#define INF 1e18;
#define EPS 1e-9
#define MOD 1000000007

int a[52][22];

int main() {
//	freopen("input.txt", "r", stdin);
	speed;
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m=0,mx=0;;
	for(int i=0;i<n-1;i++){
		if(a[i+1]>=a[i]) m++;
		else {mx=max(mx,m);m=0;}
	}
	mx=max(mx,m);
	cout<<mx+1;
}