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
    string s;
    cin>>s;
    ll res = 0;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        ll temp = 1;
        int j = i;
        while((j+1)<n && (s[j]==s[j+1]))
        {
            temp++;
            j++;
        }
        res = max(temp,res);
        i = j;
    }
    cout<<res<<endl;
}