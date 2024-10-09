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
#define all(c) (c).begin(), (c).end()
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    solve();
    return 0;
}

void solve()
{
    int n;
    scanf("%d", &n);
    unordered_map<int, int, custom_hash> mp;
    int LongestLen = 0;
    int start = 0;
    for(int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        auto it = mp.find(temp);
        if(it != mp.end() && it->second >= start)
        {
            start = it->second + 1;
        }
        mp[temp] = i;
        LongestLen = max(LongestLen, i - start + 1);
    }
    printf("%d\n", LongestLen);
}
// void solve()
// {
//     int n;
//     cin >> n;
//     map<int, int>mp;
//     int LongestLen = 0;
//     int start = 0, end = 0;
//     for(int i = 0; i < n; i++)
//     {
//         int temp;
//         cin >> temp;
//         auto it = mp.find(temp);
//         end = i;
//         if(it != mp.end())
//         {
//             if(start <= it -> second)
//                 start = it -> second + 1;
//             it -> second = i;
//         }
//         else
//         {
//             mp.insert({temp, i});
//         }
//         LongestLen = max(LongestLen, end - start + 1);
//         //cout << start << " " << end << endl;
//     }
//     cout << LongestLen << endl;
// }
