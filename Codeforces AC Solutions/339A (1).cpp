/*
Problem Name: A - Helpful Maths
Problem ID: 339A
Problem URL: https://codeforces.com/contest/339/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40237859
Solution Time: 2018-07-12 19:14:20
Language: GNU C++11
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<string.h>
#include<set>
#include<stack>
#include<queue>
#include<algorithm>
#include<iomanip>
//#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long int ll;

#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }

#define INF 2000000000;
#define EPS 1e-9
#define MOD 1000000007


int main() {
   // freopen("input.txt", "r", stdin);
    speed;
    
    string s;
    cin>>s;
    int l=s.length();
    int a[(l+1)/2]={0};
    int k=0;
    for (int i = 0; i < l; ++i)
    {
        if(s[i]!=&#39;+&#39;) {a[k]=s[i]-&#39;0&#39;;k++;}

    }
    
    sort(a,a+sizeof(a)/sizeof(a[0]));
    for (int i = 0; i < sizeof(a)/sizeof(a[0])-1; ++i)
    {
        cout<<a[i]<<&#39;+&#39;;
    }
    cout<<a[sizeof(a)/sizeof(a[0])-1];;
    
}