#include <iostream>
using namespace std;

int absolute(int n)
{
    if (n < 0)
        return -(n);
    return n;
}

void program()
{

    int i, j;
    int n;

    do
    {
        cin >> n;
    } while (n < 2 || n > 50);

    int athletes[n], teamA[n], teamB[n];
    int min_difference = 1000;
    int maxA = 0, minB = 0;

    for (i = 0; i < n; i++)
    {
        do
        {
            cin >> athletes[i];
        } while (athletes[i] < 1 || athletes[i] > 1000);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
            {
                if ((absolute(athletes[i] - athletes[j]) <= min_difference))
                {
                    min_difference = absolute(athletes[i] - athletes[j]);
                    maxA = athletes[i];
                    minB = athletes[j];
                }
            }
        }
    }
    cout << min_difference << "\n";
}

int main()
{

    int cases;
    int i;

    do
    {
        cin >> cases;
    } while (cases < 1 || cases > 1000);

    for (i = 0; i < cases; i++)
    {
        program();
    }

    return 0;
}