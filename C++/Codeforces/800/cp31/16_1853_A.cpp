#include <iostream>
using namespace std;

int getMinDifference(int arr[], int n) {

    int min = arr[1] - arr[0];

    for (int i = 1; i < n - 1; i++)
        if((arr[i + 1] - arr[i]) < min)
            min = (arr[i + 1] - arr[i]);

    return min;

}

void program()
{
    int n;

    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int minDiff = getMinDifference(arr, n);

    if (minDiff < 0) {
        cout << 0 << endl;
        return;
    }

    cout << (minDiff / 2) + 1  << endl;
    

    

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