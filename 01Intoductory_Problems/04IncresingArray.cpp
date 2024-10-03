#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pqi pair<int,int>
#define vll vector<ll>
void solve();
int main()
{
    solve();
    return 0;
}

void solve()
{
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll res = 0;
    for(int i=1;i<n;i++)
    {
        if(v[i] < v[i-1])
        {
            res += (v[i-1] - v[i]);
            v[i] = v[i-1];
        }
    }
    cout<<res<<endl;
}