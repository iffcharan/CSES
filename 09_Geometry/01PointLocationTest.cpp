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
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    ll x1,y1,x2,y2,x,y;
    cin >> x1 >> y1
        >> x2 >> y2
        >> x >>y;
    ll crossProduct = (x2 - x1) * (y - y1) - (y2 - y1) * (x - x1);
    if(crossProduct < 0) cout << "RIGHT\n";
    else if(crossProduct > 0) cout << "LEFT\n";
    else cout << "TOUCH\n";
}
