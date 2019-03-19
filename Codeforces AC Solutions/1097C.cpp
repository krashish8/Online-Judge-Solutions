/*
Problem Name: C - Yuhao and a Parenthesis
Problem ID: 1097C
Problem URL: https://codeforces.com/contest/1097/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47924516
Solution Time: 2019-01-04 18:36:20
Language: GNU C++17
Time consumed: 77 ms
Memory consumed: 1900 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 1e9+7;
const int N  = 150005;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        stack <char> st;
        for(int j = 0; j < s.length(); j++) {
            if(s[j]==&#39;(&#39;) st.push(&#39;(&#39;);
            else {
                if(!st.empty() && st.top()==&#39;(&#39;) st.pop();
                else st.push(&#39;)&#39;);
            }
        }
        int cnt = 0;
        int sz = st.size();
        char t[sz];
        for (int i = 0; i < sz; ++i)
        {
            t[i]=st.top();
            st.pop();
        }
        int flag = 0;
        for (int i = 1; i < sz; ++i)
        {
            if(t[i]!=t[0]) {flag=1; break;}
        }
        if(flag==1) a[i] = (inf);
        else
        {
            if(sz==0 || t[0]==&#39;)&#39;) a[i] = (sz);
            else a[i] = (-sz);
        }
        
    }

    int l, r;
    sort(a,a+n);
    l=0;
    r = n-1;
    int c = 0;
    while(l<r) {
        if(a[l] + a[r] == 0)
        {
            c++;
            l++;
            r--;
        }
        else if(a[l] + a[r] < 0)
            l++;
        else
            r--;
    }
    cout << c;
    return 0;
}