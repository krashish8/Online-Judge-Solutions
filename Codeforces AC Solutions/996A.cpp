/*
Problem Name: A - Hit the Lottery
Problem ID: 996A
Problem URL: https://codeforces.com/contest/996/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39669975
Solution Time: 2018-06-26 11:33:26
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 0 KB
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

int a[105];

int main() {
//	freopen("input.txt", "r", stdin);
	speed;
	
	int n;
	cin>>n;
	int c=0;
	while(n) {
		if(n>=100) {n-=100; c++;}
		else if(n>=20) {n-=20; c++;}
		else if(n>=10) {n-=10; c++;}
		else if(n>=5) {n-=5; c++;}
		else {n--;c++;}
	}
	cout<<c;
}