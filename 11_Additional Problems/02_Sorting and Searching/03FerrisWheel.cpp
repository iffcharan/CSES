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
    int n,x;
    cin>>n>>x;
    vi weights(n);
    for(int i = 0;i < n;i++)
    {
        cin>>weights[i];
    }
    sort(weights.begin(),weights.end());
    int left = 0, right = n-1;
    int count = 0;
    while(left < right)
    {
        if(weights[left] + weights[right] <= x)
        {
            left++;
            right--;
        }
        else
        {
            right--;
        }
        count++;
        if(left == right)
        {
            count++;
        }
    }
    cout<<count<<endl;
}