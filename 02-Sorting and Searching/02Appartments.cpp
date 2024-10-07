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
    int n,m,k;
    cin>>n>>m>>k;
    vi appartments(n),applicants(m);
    int count = 0;
    for(int i = 0 ;i< n;i++)
    {
        cin>>appartments[i];
    }
    for(int i = 0;i < m;i++)
    {
        cin>>applicants[i];
    }
    sort(appartments.begin(),appartments.end());
    sort(applicants.begin(),applicants.end());
    int i = 0,j = 0;
    while(i < n && j < m)
    {
        int diff = abs(applicants[j] - appartments[i]);
        if(diff <= k)
        {
            count++;
            i++;
            j++;
        }
        else if(appartments[i] < applicants[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<count<<endl;
}