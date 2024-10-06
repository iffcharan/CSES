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
void solve1();
int main()
{
    //solve();
    solve1();
    return 0;
}

void solve()
{
    int n;
    cin>>n;
    vpii timings;
    for(int i = 0;i < n;i++)
    {
        int a,d;
        cin>>a>>d;
        timings.push_back({a,-1});
        timings.push_back({d,1});
    }
    int maxCustomers = 0;
    int currCustomers = 0;
    sort(timings.begin(),timings.end());
    for(int i = 0;i < 2*n;i++)
    {
        if(timings[i].second == -1)
        {
            currCustomers++;
            maxCustomers = max(currCustomers, maxCustomers);
        }
        else
        {
            currCustomers--;
        }
    }
    cout<<maxCustomers<<endl;
}

void solve1()
{
    int n;
    cin>>n;
    vi arr(n),dep(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin >> dep[i];
    }
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i = 0, j = 0;
    int maxCustomers = 0;
    int currCustomers = 0;
    while(i < n && j < n)
    {
        if(arr[i] < dep[j])
        {
            currCustomers++;
            maxCustomers = max(currCustomers, maxCustomers);
            i++;
        }
        else
        {
            currCustomers--;
            j++;
        }
    }
    cout<<maxCustomers<<endl;
}