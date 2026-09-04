#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printMap(const unordered_map<long long, long long>& mp) {
    for (const auto& [key, value] : mp) {
        cout << key << " => " << value << '\n';
    }
}

void solve() {
    long long n, ans = 1;
    cin >> n;

    vector<long long> A(n), B(n);
    unordered_map<long long, long long> am, bm;

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        am.insert({A[i], 0});
    }
    for (int i = 0; i < n; ++i) {
        cin >> B[i];
        bm.insert({B[i], 0});
    }

    long long cur_a = A[0], cnt_a = 1, cur_b = B[0], cnt_b = 1;

    for (int i=1; i<n; i++) {
        if (A[i] == cur_a) {
            cnt_a++;
        }
        else if (A[i] != cur_a) {
            am[cur_a] = max(am[cur_a], cnt_a);
            cur_a = A[i];
            cnt_a = 1;
        }

        if (B[i] == cur_b) {
            cnt_b++;
        }
        else if (B[i] != cur_b) {
            bm[cur_b] = max(bm[cur_b], cnt_b);
            cur_b = B[i];
            cnt_b = 1;
        }
    }

    am[cur_a] = max(am[cur_a], cnt_a);
    bm[cur_b] = max(bm[cur_b], cnt_b);

    //cout << "map A" << "\n";
    //printMap(am);
    //cout << "map B" << "\n" ;
    //printMap(bm);

    for (const auto& [key, value1] : am) {
        if (bm.find(key) != bm.end()) {  // fixed here
            long long total = value1 + bm[key];
            ans = max(ans, total);
        } else {
            ans = max(ans, value1);  // handle case when only in am
        }
    }
    for (const auto& [key, value2] : bm) {
        if (am.find(key) == am.end()) { // only in bm
            ans = max(ans, value2);
        }
    }

    cout << ans << endl;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

