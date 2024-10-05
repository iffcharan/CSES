#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pqi pair<int,int>
#define vll vector<ll>
ll MOD = 1e9 + 7;
void solve();
ll power(ll base, ll expo);
int main()
{
    solve();
    return 0;
}
ll power(ll base, ll expo)
{
    ll ans = 1;
    while(expo)
    {
        if(expo & 1LL)
        {
            ans = (ans * base) % MOD;
        }
        base =  (base * base) % MOD;
        expo >>= 1LL;
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    cout<<power(2LL,n)<<endl;
}
