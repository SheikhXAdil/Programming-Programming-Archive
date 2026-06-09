#include <iostream>
#include <cmath>
using namespace std;

void program()
{

    int n;
    long long x, maxB = 0, minB = 0;

    cin >> n >> x;

    long long *arr = new long long[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxB += ceil( (double) arr[i] / x);
        minB += arr[i];
    }

    minB = ceil( (double) minB / x);

    cout << minB << " " << maxB << endl;
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