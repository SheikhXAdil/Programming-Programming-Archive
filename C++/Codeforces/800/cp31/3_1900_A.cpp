#include <iostream>
using namespace std;

void program()
{
    int n;
    string s;
    int actions = 0;
    bool fillFlag = false;
    int temp;
    int emptyCellCount = 0;

    cin >> n >> s;

    for (int i = 0; i < n;)
    {

        if (s[i] == '#')
        {
            i++;
            continue;
        }

        temp = 0;

        while (s[i + temp] == '.')
        {
            emptyCellCount++;
            temp++;
        }

        if (temp > 2)
        {
            fillFlag = true;
        }

        // cout << i << " " << temp << " " << emptyCellCount << endl;
        i += temp;
    }

    if(fillFlag)
        actions = 2;
    else
        actions = emptyCellCount;

    cout << actions << endl;
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