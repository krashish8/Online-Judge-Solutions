/*
Problem Name: A - Bear and Five Cards
Problem ID: 680A
Problem URL: https://codeforces.com/contest/680/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39506722
Solution Time: 2018-06-22 08:38:47
Language: GNU C++17
Time consumed: 15 ms
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

int a[105],b[105];

int main() {
//	freopen("input.txt", "r", stdin);
	speed;
	
	for(int i=0;i<5;i++){
		int n;
		cin>>n;
		a[n]++;
	}
	int s1=0;
	int f1=0;
	for(int i=0;i<105;i++) {
		b[i]=a[i];
	}
	for(int i=0;i<105;i++) {
		if(a[i]>=3 && f1==0) {a[i]-=3; f1=1;}
		else if(a[i]==2 && f1==0) {a[i]=0; f1=1;}
		s1+=a[i]*i;
	}
	int s2=0;
	f1=0;
	for(int i=102;i>=0;i--) {
		if(b[i]>=3 && f1==0) {b[i]-=3; f1=1;}
		else if(b[i]==2 && f1==0) {b[i]=0; f1=1;}
		s2+=b[i]*i;
	}
	cout<<min(s1,s2);
}