/*
Problem Name: B - Steps
Problem ID: 152B
Problem URL: https://codeforces.com/contest/152/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46717735
Solution Time: 2018-12-07 15:06:09
Language: GNU C++14
Time consumed: 92 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
//#define endl &#39;\n&#39;



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    //IOS;
    
    int n,m;
    cin>>n>>m;
    n--;m--;
    int x,y;
    cin>>x>>y;
    x--;y--;
    int v;
    cin>>v;
    int c=0;
    while(v--) {

        int a,b;
        cin>>a>>b;
        int step;
        if(a>0 && b>0)
            step = min((n-x)/a,(m-y)/b);
        else if(a<0 && b>0) {
            step = min((0-x)/a,(m-y)/b);
        }
        else if(a>0 && b<0) {
            step = min((n-x)/a,(0-y)/b);
        }
        else if(a<0 && b<0) {
            step = min((0-x)/a,(0-y)/b);
        }
        else if(!(a==0 && b==0)) {
            if(a==0) {
                if(b>0) step = (m-y)/b;
                else step = (0-y)/b;
            }
            if(b==0) {
                if(a>0) step = (n-x)/a;
                else step = (0-x)/a;
            }
        }
        
        x=x+step*a;
        y=y+step*b;
        c+=abs(step);

    }
    cout<<c;
    return 0;
}