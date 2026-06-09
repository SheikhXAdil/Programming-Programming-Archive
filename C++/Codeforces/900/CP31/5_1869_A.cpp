#include <iostream>
#include <cmath>
using namespace std;

void program()
{

    int n;

    cin >> n;

    long long *arr = new long long[n];
    int firstZero = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            firstZero = i + 1;
    }

    if (n % 2 == 0)
    {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
        return;
    }

    cout << 4 << endl;
    cout << 1 << " " << n - 1 << endl;
    cout << 1 << " " << n - 1 << endl;
    cout << n - 1 << " " << n << endl;
    cout << n - 1 << " " << n << endl;

    
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