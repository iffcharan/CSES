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
    ll n;
    cin>>n;
    ll sum = 0;
    ll nSum = (n * (n + 1)) / 2;
    for (int i=0;i<n-1;i++)
    {
        int temp;
        cin>>temp;
        sum += temp;
    }
    ll res = nSum - sum;
    cout<<res<<endl;
}