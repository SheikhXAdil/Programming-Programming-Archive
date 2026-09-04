#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void solve() {
    long long n, k, x;
    cin >> n >> k;
    
    vector<pair<long long, int>> paired;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        x = x % k == 0 ? k : x % k;
        paired.push_back({x, i+1});
    }
    
    
    stable_sort(paired.begin(), paired.end(), [](pair<long long, int> a, pair<long long, int> b) {
        return a.first > b.first;
    });

    for (int i=0; i<paired.size(); i++)
        cout << paired[i].second << " ";
    cout << endl;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

