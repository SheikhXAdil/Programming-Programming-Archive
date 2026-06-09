#include <iostream>
using namespace std;

int main()
{

    int i, j;
    int n;
    // int count = 0;

    do
    {
        cin >> n;
    } while (n < 0 || n > 100);

    if (n % 2 == 1)
        printf("-1");
    else
    {
        for (i = 1; i <= n / 2; i++)
        {
            printf("%d %d ", 2 * i, 2 * (i - 1) + 1);
        }
    }

    return 0;
}