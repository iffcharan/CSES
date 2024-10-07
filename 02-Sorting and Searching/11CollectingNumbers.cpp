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
    vi indices(n + 1);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        indices[v[i]] = i + 1;
    }
    int count = 1;
    for(int i = 1; i < n; i++)
    {
        if(indices[i] > indices[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
}