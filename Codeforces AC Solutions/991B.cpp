/*
Problem Name: B - Getting an A
Problem ID: 991B
Problem URL: https://codeforces.com/contest/991/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39668552
Solution Time: 2018-06-26 10:30:30
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
	double s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	sort(a,a+n);
	int c=0;
	double x=4.5*n;
	for(int i=0;i<=n;i++){
		if(s>=x) {cout<<c; return 0;}
		else {
			c++;
			s=s-a[i]+5;
		}
	}
}