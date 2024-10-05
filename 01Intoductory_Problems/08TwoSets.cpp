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
    ll sum = (n * (n + 1)) / 2;
    if(sum%2==1) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        vector<ll>set1,set2;
        vector<bool> visited(n+1,false);
        ll s1Sum = 0, maxi = n;
        while(s1Sum < sum/2)
        {
            ll remSum = sum/2 - s1Sum;
            if(remSum >= maxi)
            {
                set1.push_back(maxi);
                visited[maxi] = true;
                s1Sum += maxi;
                maxi--;
            }
            else
            {
                set1.push_back(remSum);
                visited[remSum] = true;
                break;
            }
        }

        for(int i = 1;i <= n; i++)
        {
            if(!visited[i])
            {
                set2.push_back(i);
            }
        }
        cout<<set1.size()<<endl;
        for(auto it:set1) cout<<it<<" ";
        cout<<endl;
        cout<<set2.size()<<endl;
        for(auto it:set2) cout<<it<<" ";
        cout<<endl;
    }
}