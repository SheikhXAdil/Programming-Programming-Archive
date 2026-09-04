#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

void solve() {
    string s, line, num;
    char c;
    int n;

    cin >> n >> ws >> c;

    cin >> s;
    s += s;

    //cout << "h" << c << " " << s << endl;

    int lastG = -1;
    int ans = 0;

    // traverse from right to left
    for (int i = 2 * n - 1; i >= 0; --i) {
        if (s[i] == 'g') {
            lastG = i;
        }
        if (i < n && s[i] == c && lastG != -1) {
            ans = max(ans, lastG - i);
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}