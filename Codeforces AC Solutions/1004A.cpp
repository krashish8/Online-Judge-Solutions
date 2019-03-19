/*
Problem Name: A - Sonya and Hotels
Problem ID: 1004A
Problem URL: https://codeforces.com/contest/1004/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39992151
Solution Time: 2018-07-05 19:45:58
Language: GNU C++11
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include <iomanip> 
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

#define INF 1e18;
#define EPS 1e-9
#define MOD 1000000007


int main() {
  //  freopen("input.txt", "r", stdin);
    speed;
    
    int n,d,s=2;
    cin>>n>>d;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 1; i < n; ++i)
    {
        if(a[i]-a[i-1]==d*2) s++;
        else if (a[i]-a[i-1]>d*2) s+=2;
    }
    
    
    cout<<s;
}