#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define pqi priority_queue<int>
#define pql priority_queue<ll>
void solve();
int main()
{
    solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vll v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll median = v[n / 2];
    ll res = 0;
    for(int i = 0; i < n; i++)
    {
        res += abs(v[i] - median);
    }
    cout << res <<endl;
}