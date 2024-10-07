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
    int n,m;
    cin>>n>>m;
    multiset<int> prices;
    for(int i = 0;i < n;i++)
    {
        int price;
        cin>>price;
        prices.insert(price);
    }
    for(int i = 0;i < m;i++)
    {
        int custPrice;
        cin>>custPrice;
        auto it = prices.upper_bound(custPrice);
        if(it == prices.begin())
        {
            cout<<"-1\n";
        }
        else{
            cout<<*(--it)<<endl;
            prices.erase(it);
        }
    }
    cout<<endl;
}