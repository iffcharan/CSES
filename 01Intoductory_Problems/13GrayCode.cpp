#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pqi pair<int,int>
#define vll vector<ll>
void solve();
vector<string> funHelper(int n);
int main()
{
    solve();
    return 0;
}

void solve()
{
    int n;
    cin>>n;
    vector<string>res = funHelper(n);
    for(auto it:res)
    {
        cout<<it<<endl;
    }
}

vector<string> funHelper(int n)
{
    if(n==1)
    {
        return {"0","1"};
    }
    vector<string> prevDigitCode = funHelper(n-1);
    vector<string> currDigitCode = prevDigitCode;
    reverse(currDigitCode.begin(),currDigitCode.end());
    int sz = prevDigitCode.size();
    for(int i = 0; i < sz; i++)
    {
        prevDigitCode[i] = "0" + prevDigitCode[i];
        string oneCode = "1" + currDigitCode[i];
        prevDigitCode.push_back(oneCode);
    }
    return prevDigitCode;
}