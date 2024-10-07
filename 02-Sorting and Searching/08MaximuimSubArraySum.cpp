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
    for(int i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    ll maxSubarraySum = v[0], currSubarraySum = v[0];
    for(int i = 1;i < n;i++)
    {
        currSubarraySum += v[i];
        currSubarraySum = max(currSubarraySum, v[i]);
        maxSubarraySum = max(maxSubarraySum, currSubarraySum);
    }
    cout << maxSubarraySum << endl;
}