#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long n, k, q, ans = 0;
    cin >> n >> k >> q;
    
    vector<long long> arr(n), seq;
    long long cur = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        
        if (arr[i] > q) {
            seq.push_back(cur);
            cur = 0;
        } else {
            cur++;
        }
    }
    
    if (cur > 0)
        seq.push_back(cur);
    
    for (auto len : seq) {
        if (len >= k) {
            long long count = (len - k + 1);
            ans += (count * (count + 1)) / 2;
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

    