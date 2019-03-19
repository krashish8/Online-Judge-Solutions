/*
Problem Name: A - Anton and Polyhedrons
Problem ID: 785A
Problem URL: https://codeforces.com/contest/785/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46538815
Solution Time: 2018-12-03 13:46:39
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,c=0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron") c+=4;
        if(s=="Cube") c+=6;
        if(s=="Octahedron") c+=8;
        if(s=="Dodecahedron") c+=12;
        if(s=="Icosahedron") c+=20;
        
    }
    cout<<c;
    return 0;
}