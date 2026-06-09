#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n,k, count_2 = 0;
    cin >> n >> k;

    int k_mod = k;

    vector<int> arr(n, 0);

    for(int i= 0; i<n; i++) {
        cin >> arr[i];

        k_mod = min(k_mod, k - (arr[i] % k == 0 ? k : arr[i] % k));

        if (arr[i] % 2 == 0)
            count_2++;
    }

    if (k == 2 || k == 3 || k == 5 || k == 7) {
        cout << k_mod << endl;
        return;
    } else {
        cout << min(k_mod, count_2 >= 2 ? 0 : 2 - count_2) << endl;
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
