#include <iostream>
using namespace std;



void program()
{
    int n, steps = 0;

    cin >> n;
    
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] %= 2;
    }

    for (int i = 0, k; i < n - 1;)
    {
        k = 0;
        while (i + k <= n - 1 && arr[i + k] == arr[i])
            k++;

        steps += (k - 1);
        i += k;
    }
    
    
    cout << steps << endl;

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