/*
Problem Name: Equation
Problem Link: https://erdos.sdslabs.co/problems/2
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

map<int,int> mm;
set<int> s;

//s.clear();
//mm.clear(); Use these before successive iterations

vector<int> primeFactor(int n) 
{ 
    vector<int> v;
    while (n%2 == 0) 
    { 
        v.push_back(2);
        n = n/2; 
    }  
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            v.pb(i);  
            n = n/i; 
        } 
    } 
    if (n > 2) 
        v.push_back(n);
    for (int i = 0; i < v.size(); ++i)
    {
        s.insert(v[i]);
        mm[v[i]]++;
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
    double x = 0, y, z;
    while (x<=100000) {
    	x += 0.0001;
    	y = pow((pow(x,6) + 8*pow(x,4) - 6*x*x + 8), 1.0/6.0);
    	z = 3345*x + 4321*y*y;
    	if(abs(z-round(z))<eps) break;
    }
    cout << z;
    
    cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
    return 0;
}
/*
57566
Time Taken: 0.0180000000
*/