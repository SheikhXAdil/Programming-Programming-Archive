#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

void solve() {
    string s;
    int n;
    cin >> n >> s;

    vector<int> prefix(n), postfix(n);
    unordered_set<char> seen;

    // Compute prefix[i] = number of distinct characters in s[0..i]
    seen.clear();
    for (int i = 0; i < n; ++i) {
        seen.insert(s[i]);
        prefix[i] = seen.size();
    }

    // Compute postfix[i] = number of distinct characters in s[i..n-1]
    seen.clear();
    for (int i = n - 1; i >= 0; --i) {
        seen.insert(s[i]);
        postfix[i] = seen.size();
    }

    // Try all split points from i = 0 to n - 2
    int maxDistinct = 0;
    for (int i = 0; i < n - 1; ++i) {
        maxDistinct = max(maxDistinct, prefix[i] + postfix[i + 1]);
    }

    cout << maxDistinct << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}