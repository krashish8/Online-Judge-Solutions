/*
Problem Name: A - Is your horseshoe on the other hoof?
Problem ID: 228A
Problem URL: https://codeforces.com/contest/228/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39505069
Solution Time: 2018-06-22 07:04:28
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<sstream>
#include<string>
#include<set>
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



int main() {
//	freopen("input.txt", "r", stdin);
	speed;
	
	set<int> s;
	for(int i=0;i<4;i++) {
		int a;
		cin>>a;
		s.insert(a);
	}
	cout<<4-s.size();
}