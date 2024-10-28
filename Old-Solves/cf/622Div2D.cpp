//THIS ISNT COMPLETE :/

#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;

#define F0R(n) for (int i = 0; i < n; i++)

const int MAXN = 100100;

inline int c(int &a, int b) {
    return a = a * 10 + b;
}

struct node {
  vi i;
  int s;
};
using vn = vector<node>;
vn arr;
vi e, cur;
int iter = 1, dp[MAXN << 1][256], mp[MAXN], ans = 0;
map<int, vi> proc, proc_ans;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  F0R(n) {
    int l, r;
    cin >> l >> r;
    r++;
    proc[l].push_back(i);
    proc_ans[r].push_back(i);
    e.push_back(l);
    e.push_back(r);
  }
  sort(e.begin(), e.end());
  e.erase(unique(e.begin(), e.end()), e.end());
  // loop does: [l, r)
  for(auto t: e) {
    vi temp = proc[t], temp_ans = proc_ans[t];
    for(auto i: temp) {
      arr.push_back({cur, t - iter});
      cur.erase(find(cur.begin(), cur.end(), i));
      iter = t;
    }
    // sort(temp.begin(), temp.end());
    for(auto i: temp_ans) {
      arr.push_back({cur, t - iter});
      cur.push_back(i);
      iter = t;
    }
  }
  F0R(arr.size() - 1) {
    bool ok = true;
    int off;
    for(int j = 0; i < arr[i + 1].i.size(); ++j) {
      mp[arr[i+1]].i[j] = arr[i].i[j];
      if(arr[i].i[j] != arr[i + 1].i[j]) {
        ok = false;
        off = j;
        break;
      }
    }
  }

}
