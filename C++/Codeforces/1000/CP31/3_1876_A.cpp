#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void solve() {
long long n, p;
cin >> n >> p;

vector<long long> A(n+1), B(n+1);  
for (int i = 0; i < n; ++i) cin >> A[i];  
for (int i = 0; i < n; ++i) cin >> B[i];  
  
A[n] = n - 1;  
B[n] = p;  

vector<pair<long long, long long>> paired;  

for (int i = 0; i < n+1; ++i) {  
    paired.push_back({B[i], A[i]});  
}  

sort(paired.begin(), paired.end());  
  
long long cost = p, left = n - 1;  
  
for (int i = 0; left > 0 && i <= n; ++i) {
        long long take = min(left, paired[i].second);
        cost += take * paired[i].first;
        left -= take;
    }
  
cout << cost << endl;

}

int main() {
long long t;
cin >> t;
while (t--) {
solve();
}
return 0;
}

