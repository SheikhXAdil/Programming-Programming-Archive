#include <iostream>
#include <climits>
using namespace std;

// GCD function
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solve() {
    long long n;
    cin >> n;

    long long minLCM = LLONG_MAX;
    long long bestK = -1;

    for (long long d = 1; d * d <= n; ++d) {
        if (n % d == 0) {
            // Try k = d
            if (d > 0 && d < n) {
                long long k1 = d;
                long long a1 = n - k1, b1 = k1;
                long long g1 = gcd(a1, b1);
                long long lcm1 = (a1 / g1) * b1;
                if (lcm1 < minLCM) {
                    minLCM = lcm1;
                    bestK = k1;
                }
            }

            // Try k = n / d (if it's different)
            long long other = n / d;
            if (other != d && other > 0 && other < n) {
                long long k2 = other;
                long long a2 = n - k2, b2 = k2;
                long long g2 = gcd(a2, b2);
                long long lcm2 = (a2 / g2) * b2;
                if (lcm2 < minLCM) {
                    minLCM = lcm2;
                    bestK = k2;
                }
            }
        }
    }

    cout << bestK << ' ' << n - bestK << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}