#include <iostream>
using namespace std;

void program()
{
    int n;

    cin >> n;

    if(n == 1) {
        cin >> n; // reading the element in n variable as only one elem
        cout << "1" << endl;
        cout << n << endl;
        return;
    }

    int* arr = new int[n];
    int* res = new int[n * 2];
    int resCount = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    res[resCount++] = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i - 1] <= arr[i]) {
            res[resCount++] = arr[i];
        } else {
            res[resCount++] = arr[i];
            res[resCount++] = arr[i];
        }

    }

    cout << resCount << endl;

    for (int i = 0; i < resCount; i++)
    {
        cout << res[i] << " ";
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