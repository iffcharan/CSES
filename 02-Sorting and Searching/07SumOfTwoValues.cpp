#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
#define umpii unordered_map<int,int>
#define mmpii multimap<int,int>
void solve();
int main()
{
    solve();
    return 0;
}

void solve()
{
    int n,x;
    cin>>n>>x;
    mmpii values;
    for(int i = 1;i <= n;i++)
    {
        int value;
        cin >> value;
        values.insert({value,i});
    }
    bool isThere = false;
    for(auto it = values.begin(); it != values.end(); it++)
    {
        int currVal = it -> first;
        auto finditr = values.find(x - currVal);
        if(finditr!=values.end() && finditr != it)
        {
            cout << it -> second << " " << finditr -> second << endl;
            isThere = true;
            break;
        }
    }
    if(!isThere)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
}