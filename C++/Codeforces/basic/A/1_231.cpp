#include <iostream>
using namespace std;

int main()
{
    int n;
    int p, v, t;
    int i, count = 0;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> p >> v >> t;

        if (p)
        {
            if (v)
                count++;
            else if (t)
                count++;
        }
        else
        {
            if (v)
                if (t)
                    count++;
        }
    }

    cout << count;

    return 0;
}