#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<long long> x(n);
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
  int l = 0, r = 0;
  long long ans = 0;
  unordered_set<long long> st;
  while(r < n)
  {
    while(st.count(x[r]))
    {
      st.erase(x[l]);
      l++;
    }
    st.insert(x[r]);
    ans += (r - l + 1);
    r++;
  }
  cout << ans << endl;
}
int main()
{
  solve();
  return 0;
}