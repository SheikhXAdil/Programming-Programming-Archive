#include <iostream>
using namespace std;

void program()
{

    long long a, b, n, maxDays = 0;

    cin >> a >> b >> n;

    long long *arr = new long long[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    maxDays += b;

    for (int i = 0; i < n; i++)
    {
        maxDays += min(a - 1, arr[i]);
    }

    cout << maxDays << endl;
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