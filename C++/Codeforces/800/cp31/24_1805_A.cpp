#include <iostream>
using namespace std;



void program()
{
    int n, num;

    cin >> n;
    
    int* arr = new int[n];

    cin >> arr[0];
    num = arr[0];

    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        num ^= arr[i];
    }
    
    if (n % 2 == 0 && num != 0) {
        cout << -1 << endl;
        return;
    }

    cout << num << endl;

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