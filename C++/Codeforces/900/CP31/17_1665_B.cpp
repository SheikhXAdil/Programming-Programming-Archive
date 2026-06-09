#include <iostream>
#include <map>
using namespace std;

void program()
{

    int n, count = 0;

    map<int, int> counts;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        counts[arr[i]]++;
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int maxCount = 0;

    for (auto count : counts)
    {
        if (count.second > maxCount)
        {
            maxCount = count.second;
        }
    }

    // cout << count << " " << maxCount << endl;

    while ((maxCount * 2) <= n)
    {
        count += (maxCount + 1);
        maxCount *= 2;
    }

    // cout << count << " " << maxCount << endl;

    if (maxCount < n)
    {
        count += (n - maxCount + 1);
    }

    cout << count << endl;
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