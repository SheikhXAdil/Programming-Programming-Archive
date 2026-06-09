#include <iostream>
using namespace std;

void program()
{
    int n;
    int operations = INT_MAX;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(abs(arr[i]) < operations)
            operations = abs(arr[i]);
        
    }

    cout << operations << endl;
}

int main()
{
    program();

    return 0;
}