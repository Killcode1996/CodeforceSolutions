#include<bits/stdc++.h>
 
using namespace std;
const int MAXM = 300000;
 
vector<int> v[4];
vector<pair<int, int> > answer;
long long good[4][1 + MAXM];
long long dp[1 + MAXM];
 
void go(int left, int right, int from, int to) {
    if (left > right)
        return;
    int middle = (left + right) / 2; int best;
    for (int i = from; i <= to; i++) {
        int need = middle - i;
        if ((!(need % 2)) && need / 2 <= v[2].size() && good[1][i] + good[2][need / 2] > dp[middle]) {
            dp[middle] = good[1][i] + good[2][need / 2];
            best = i;
        }
    }
    if (left == right)
        return;
    go(left, middle - 1, from, best);
    go(middle + 1, right, best, to);
}
 
int main() {
    int n, m;
      cin>>n>>m;
    for (int i = 1; i <= n; i++) {
        int w, c;
        cin>>w>>c;
        v[w].push_back(c);
    }
    sort(v[1].rbegin(), v[1].rend());
   // reverse(v[1].begin(), v[1].end());
    for (int i = 1; i <= v[1].size(); i++)
        good[1][i] = good[1][i - 1] + v[1][i - 1];
    sort(v[2].rbegin(), v[2].rend());
  //  reverse(v[2].begin(), v[2].end());
    for (int i = 1; i <= v[2].size(); i++)
        good[2][i] = good[2][i - 1] + v[2][i - 1];
    sort(v[3].rbegin(), v[3].rend());
  //  reverse(v[3].begin(), v[3].end());
    for (int i = 1; i <= v[3].size(); i++)
        good[3][i] = good[3][i - 1] + v[3][i - 1];
    go(1, m, 0, v[1].size());
    go(1, m, 0, v[2].size());
    go(1, m, 0, v[3].size());
    long long answer = 0;
    for (int i = 1; i <= m; i++)
        dp[i] = max(dp[i], dp[i - 1]);
    for (int i = 0; i <= v[3].size(); i++)
        if (3 * i <= m)
            answer = max(answer, good[3][i] + dp[m - 3 * i]);
   // printf("%I64d\n", answer);
        cout<<answer;
    return 0;
}