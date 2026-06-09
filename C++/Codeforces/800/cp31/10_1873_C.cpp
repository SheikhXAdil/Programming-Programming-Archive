#include <iostream>
using namespace std;

void program()
{
    int points = 0;
    string grid[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> grid[i];
    }

    int minPoint;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            minPoint = min(i,j);

            if (grid[i][j] == 'X')
                points += (minPoint + 1);
            if (grid[i][9 - j] == 'X')
                points += (minPoint + 1);
            if (grid[9 - i][j] == 'X')
                points += (minPoint + 1);
            if (grid[9 - i][9 - j] == 'X')
                points += (minPoint + 1);
        }
    }

    cout << points << endl;
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