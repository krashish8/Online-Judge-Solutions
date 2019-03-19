/*
Problem Name: A - Cut Ribbon
Problem ID: 189A
Problem URL: https://codeforces.com/contest/189/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39524529
Solution Time: 2018-06-22 21:02:36
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


int main() {
//	freopen("input.txt", "r", stdin);
	speed;
	
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int x,y,z;
	x=0,y=0,z=0;
	int sum=0;
	for(x=0;a*x+b*y+c*z<=n;x++) {
		for(y=0;a*x+b*y+c*z<=n;y++) {
			if((n-a*x-b*y) %c==0) {
				z=(n-a*x-b*y)/c;
				sum=max(sum,x+y+z);
				z=0;
			}
		}
		y=0;
	}
	cout<<sum;
}