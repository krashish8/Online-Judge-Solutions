/*
Problem Name: A - Flipping Game
Problem ID: 327A
Problem URL: https://codeforces.com/contest/327/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40020348
Solution Time: 2018-07-06 09:21:00
Language: GNU C++11
Time consumed: 60 ms
Memory consumed: 300 KB
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


int main() {
    //freopen("input.txt", "r", stdin);
    speed;
    
    int n;
    cin>>n;
    int a[n],o=0,z=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        if(a[i]==1) o++;
        else if(a[i]==0) z++;
    }
    int oo=0,zz=0,mx=-1;
    for (int i = 0; i < n; ++i)
    {
        for(int j=i;j<n;j++) {
            for (int k = i; k <= j; ++k)
            {
                if(a[k]==1) oo++;
                else zz++;
            }
            mx=max(mx,zz-oo);
            zz=0;oo=0;
        }
    }
    cout<<o+mx;

}