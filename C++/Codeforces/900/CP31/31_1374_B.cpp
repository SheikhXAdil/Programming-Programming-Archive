#include <iostream>
using namespace std;

void program()
{

    int n, ans = 0;

    cin >> n;

    if (n == 1) {
        cout << ans << endl;
        return;
    }

    if (n % 2 != 0) {
        n *= 2;
        ans++;
    }

    while (n > 1 && n % 6 == 0)
    {
        n /= 6;
        ans++;

        if (n != 1 && n % 2 != 0) {
            n *= 2;
            ans++;
        }
    }

    if (n > 1) {
        cout << -1 << endl;
        return;
    }
    

    cout << ans << endl;

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