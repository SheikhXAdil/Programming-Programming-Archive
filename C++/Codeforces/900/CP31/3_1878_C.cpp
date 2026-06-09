#include <iostream>
using namespace std;

long long getSummation(long long a, long long b) {

    return ((b - a + 1) * (a + b)) / 2;

}

void program()
{

    long long n, k, x;

    cin >> n >> k >> x;

    long long minSum = getSummation(1, k), maxSum = getSummation(n - k + 1, n);

    if (x >= minSum && x <= maxSum) {
        cout << "yes" << endl;
        return;
    }
        cout << "no" << endl;
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