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
    while(n!=1)
    {
        cout<<n<<" ";
        if(n&1) n = n*3 + 1;
        else n /= 2;
    }
    cout<<n<<endl;
}
