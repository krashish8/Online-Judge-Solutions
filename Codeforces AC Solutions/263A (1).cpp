/*
Problem Name: A - Beautiful Matrix
Problem ID: 263A
Problem URL: https://codeforces.com/contest/263/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40239524
Solution Time: 2018-07-12 20:29:24
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
    int a[5][5],ii,jj;
    for (int i = 0; i < 5; ++i)
    {
        for(int j=0;j<5;j++) {cin>>a[i][j]; if(a[i][j]==1) {ii=i;jj=j;}}
    }
    cout<<abs(ii-2)+abs(jj-2);
}