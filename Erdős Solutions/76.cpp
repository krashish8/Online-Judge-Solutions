/*
Problem Name: Erdős
Problem Link: https://erdos.sdslabs.co/problems/76
Author: Ashish Kumar (ashishkr23438)
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
#define endl '\n'
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 1e9+7;
const int N  = 5e5+5;

vector<int> divisors(int n) 
{
    vector<int> v;
    for (int i=1; i<=sqrt(n); i++) 
    {
        if (n%i == 0) 
        {
            v.push_back(i);
        } 
    }
    for (int i = v.size()-1; i >=0 ; i--) {
        if(v[i]*v[i]==n) continue;
        v.push_back(n/v[i]);
    }
    return v;
}

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    clock_t tStart = clock();
    
    int i = 0;
    double a[4], s, mx = -inf;
    a[0] = a[1] = a[2] = a[3] = -4;
    while(true) {
    	if(a[0] > 4 || a[1] > 4 || a[2] > 4 || a[3] > 4)
    		break;
    	s = 8;
    	double sq = 0;
    	rep(i,0,4)
    	{
    		sq += a[i]*a[i];
    		s -= a[i];
    	}
    	if(abs(sq + s*s - 16) < eps)
    		mx = max(mx,s);
    	a[i%4]+=0.00001;
    	i++;
    }
    // mx = 3.2 -->  Max value of s
    // mx*30 = 96
    vector<int> v = divisors(96);
    cout << v.size();
    
    cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
    return 0;
}
/*
12
Time Taken: 0.3090000000
*/