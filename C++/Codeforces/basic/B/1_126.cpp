#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, p;
    int i;
    double sum = 0;

    do
    {
        cin >> n;
    } while (n < 1 || n > 100);

    for (i = 1; i <= n; i++)
    {
        do
        {
            cin >> p;
        } while (p < 0 || p > 100);

        sum += p;
    }

    sum = sum / n;

    cout << sum;

    return 0;
}