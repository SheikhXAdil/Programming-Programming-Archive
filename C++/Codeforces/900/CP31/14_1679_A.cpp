#include <iostream>
using namespace std;

void program()
{

    long long n, min, max;

    cin >> n;

    if (n % 2 == 1 || n < 4) {
        cout << -1 << endl;
        return;
    }

    if (n % 6 != 0) {
        min = (n / 6) + 1;
    } else {
        min = n / 6;
    }

    max = n / 4;

    cout << min << " " << max << endl;
    
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