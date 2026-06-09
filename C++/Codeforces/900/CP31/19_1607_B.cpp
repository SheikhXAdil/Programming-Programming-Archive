#include <iostream>
using namespace std;

void program()
{

    long long x, n;

    cin >> x >> n;

    if (n % 4 == 0) {
        cout << x << endl;
        return;
    }

    if (n % 4 == 1) {
        if (x % 2 == 0) {
            cout << x - n << endl;
            return;
        } else {
            cout << x + n << endl;
            return;
        }
    }

    if (n % 4 == 2) {
        if (x % 2 == 0) {
            cout << x + 1 << endl;
            return;
        } else {
            cout << x - 1 << endl;
            return;
        }
    }

    if (n % 4 == 3) {
        if (x % 2 == 0) {
            cout << x + 1 + n << endl;
            return;
        } else {
            cout << x - 1 - n << endl;
            return;
        }
    }


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