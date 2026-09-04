#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


void solve() {
    int n, ans = 0, d;
    cin >> n >> d;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int pl = n, cur = n-1, pn;

    while (pl>0) {
        pn = ceil((d+1) / (double) arr[cur]);

        if (pn > pl)
            break;

        ans++;
        cur -= 1;
        pl -= pn;


    }


    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}