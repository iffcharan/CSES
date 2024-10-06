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
#define MAXN 1000001
#define MOD 1000000007
int DP[MAXN];
void solve();
int helper(int n);
int main()
{
    solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    memset(DP, 0, n+1);
    DP[0] = 1;
   int res = helper(n);
    cout << res << endl;
}

int helper(int left)
{
    if (DP[left] != 0) {
        return DP[left];
    }
    for (int i = 1; i <= 6; i++) {
        if (left - i >= 0) {
            DP[left] += helper(left - i);
            DP[left] %= MOD;
        }
    }
    return DP[left];
}
