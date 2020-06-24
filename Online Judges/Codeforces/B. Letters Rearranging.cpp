#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    string ss = s;
    reverse(ss.begin(), ss.end());
    if (s != ss) {
      cout << s << '\n';
    }
    else {
      char c = s.back();
      bool flag = false;
      for (int i = 0; i + 1 < (int)s.size(); ++i) {
        if (c != s[i]) {
          swap(s[i], s.back());
          flag = true;
          break;
        }
      }
      if (flag) cout << s << '\n';
      else cout << -1 << '\n';
    }
  }
  return 0;
}
