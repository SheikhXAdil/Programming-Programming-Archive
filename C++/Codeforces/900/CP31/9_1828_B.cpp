#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void program()
{

    int n, res = 0, x;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        res = __gcd(res, abs(x - i));
    }

    cout << res << endl;

}

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        program();
    }

    return 0;
}