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
    set<int>st;
    for(int i = 0;i < n;i++)
    {
        int temp;
        cin>>temp;
        st.insert(temp);
    }
    cout<<st.size()<<endl;
}
