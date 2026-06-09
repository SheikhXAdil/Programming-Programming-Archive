#include <iostream>
using namespace std;

int main()
{

    int n;
    int count;
    int min, max;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    min = arr[0]; max = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] > max)
        {
            count++;
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            count++;
            min = arr[i];
        }
    }

    cout << count;

    return 0;
}