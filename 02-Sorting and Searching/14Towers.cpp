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
#define pb push_back
#define all(c) (c).begin(), (c).end()
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    multiset<int> towers;
    for(int i = 0; i < n; i++)
    {
        ll side;
        cin >> side;
        auto it = towers.upper_bound(side);
        if(it == towers.end())
        {
            towers.insert(side);
        }
        else{
            towers.erase(it);
            towers.insert(side);
        }
    }
     cout << towers.size() << endl;
}