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
    vpii timings;
    for(int i = 0;i < n;i++)
    {
        int a, b;
        cin >> a >> b;
        timings.pb({b, a});
    }
    sort(timings.begin(), timings.end());
    int count = 0;
    int curr_ending = 0;
    for(int i = 0; i < n; i++)
    {
        if(timings[i].second >= curr_ending)
        {
            curr_ending = timings[i].first;
            count++;
        }
    }
    cout << count <<endl;
}