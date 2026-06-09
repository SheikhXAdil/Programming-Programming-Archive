#include <iostream>
using namespace std;

void program()
{

    long long n, count = 0;

    cin >> n;

    long long *arr = new long long[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int rightNonZero = -1, leftNonZero = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            leftNonZero = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            rightNonZero = i;
            break;
        }
    }

    if (rightNonZero == -1 && leftNonZero == -1)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = leftNonZero; i <= rightNonZero; i++)
    {
        if (arr[i] == 0)
        {
            cout << 2 << endl;
            return;
        }
    }

    cout << 1 << endl;
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