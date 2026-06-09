#include <iostream>
using namespace std;

void program()
{
    int n, m;
    int i, j;
    int steps = 0;

    do
    {
        cin >> n;
    } while (n < 1 || n > 100);

    do
    {
        cin >> m;
    } while (m < 1 || m > 100);

    string arr[n];

    for (i = 0; i < n; i++)
    {
        do
        {
            cin >> arr[i];
        } while (arr[i].length() != m);
    }

    // for (i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    //     cout << "\n";
    // }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == n - 1 && j != m - 1)
            {
                if (arr[i][j] != 'R')
                {
                    arr[i][j] = 'R';
                    steps++;
                }
            }
            else if (i != n - 1 && j == m - 1)
            {
                if (arr[i][j] != 'D')
                {
                    arr[i][j] = 'D';
                    steps++;
                }
            }
        }
    }

    cout << steps << "\n";
}

int main()
{

    int cases;
    int i, j;

    do
    {
        cin >> cases;
    } while (cases < 1 || cases > 10);

    for (i = 1; i <= cases; i++)
    {
        program();
    }

    // string arr[3] = {"RRR", "DDD", "RRR"};

    // for (i = 0; i < 3; i++)
    // {
    //     cout << arr[i];
    //     cout << "\n";
    // }

    return 0;
}