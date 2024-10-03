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
    if(n<5) cout<<"0\n";
    else
    {
        ll res = 0;
        ll denom = 5;
        while(denom<=n)
        {
            res += (n/denom);
            denom *= 5;
        }
        cout<<res<<endl;
    }
}