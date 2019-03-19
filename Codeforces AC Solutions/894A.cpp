/*
Problem Name: A - QAQ
Problem ID: 894A
Problem URL: https://codeforces.com/contest/894/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40017550
Solution Time: 2018-07-06 06:51:54
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
//#include<bits/stdc++.h>
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

int a[105];

int main() {
   // freopen("input.txt", "r", stdin);
    speed;
    
    string s;
    cin>>s;
    int l=s.length(),sm=0,st=0;
    for (int i = 0; i < l; ++i)
    {
        if(s[i]==&#39;Q&#39;) st++;
        a[i]=st;
    }
    for (int i = 0; i < l; ++i)
    {
        if(s[i]!=&#39;A&#39;) continue;
        sm+=a[i]*(st-a[i]);
    }
    cout<<sm;
}