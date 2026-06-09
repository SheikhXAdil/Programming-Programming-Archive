#include <iostream>
using namespace std;

int main()
{

    int k2, k3, k5, k6;
    int k2_used = 1, k3_used = 1, k5_used = 1, k6_used = 1;
    int i;
    int sum = 0;

    do
    {
        cin >> k2;
    } while (k2 < 0 || k2 > 5000000);

    do
    {
        cin >> k3;
    } while (k3 < 0 || k3 > 5000000);

    do
    {
        cin >> k5;
    } while (k5 < 0 || k5 > 5000000);

    do
    {
        cin >> k6;
    } while (k6 < 0 || k6 > 5000000);

    while (k2_used <= k2 && k5_used <= k5 && k6_used <= k6)
    {
        sum += 256;
        k2_used++;
        k5_used++;
        k6_used++;
    }

    while (k2_used <= k2 && k3_used <= k3)
    {
        sum += 32;
        k2_used++;
        k3_used++;
    }

    cout << sum;

    return 0;
}