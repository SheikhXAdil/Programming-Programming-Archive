#include <iostream>
using namespace std;

void program()
{

    long long n;

    cin >> n;
    
    long long *arr = new long long[n];


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            arr[i]++;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] % arr[i - 1] == 0) 
            arr[i]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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