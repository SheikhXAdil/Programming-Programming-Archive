#include <iostream>
using namespace std;

int proveEquations(int a, int b, int n, int m)
{
    int eq1 = (a * a) + b;
    int eq2 = a + (b * b);

    if (eq1 == n && eq2 == m)
        return 1;

    return 0;
}

int main()
{

    int i, j;
    int n, m;
    int count = 0;

    do
    {
        cin >> n;
    } while (n < 0 || n > 1000);

    do
    {
        cin >> m;
    } while (m < 0 || m > 1000);

    for (i = 0; i <= 1000; i++)
    {
        for (j = 0; j <= 1000; j++)
        {
            if (proveEquations(i, j, n, m) == 1)
                count++;
        }
    }

    cout << count;

    return 0;
}