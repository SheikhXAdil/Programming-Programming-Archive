#include <iostream>
using namespace std;

int main()
{

    int i, j;
    int colors[4], p, count = 0;

    for (i = 0; i < 4; i++)
    {
        do
        {
            cin >> p;
        } while (p < 1 || p > 1000000000);

        colors[i] = p;
    }

    // cout << "hello" << count;

    for (i = 0; i < 4; i++)
    {
        for (j = i; j < 4; j++)
        {
            if (i == j || colors[j] == 0)
                continue;
            if (colors[i] == colors[j])
            {
                colors[j] = 0;
                count++;
            }
        }
    }

    cout << count;

    return 0;
}