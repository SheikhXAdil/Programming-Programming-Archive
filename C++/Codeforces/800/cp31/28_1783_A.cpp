#include <iostream>
using namespace std;

void program()
{
    int n, preSum;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (arr[0] == arr[n - 1]) {
        cout << "NO" << endl;
        return;
    }

    swap(arr[0], arr[1]);
    swap(arr[0], arr[n-1]);

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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