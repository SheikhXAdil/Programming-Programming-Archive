#include <iostream>
using namespace std;


void program()
{
    int n, k;

    cin >> n >> k;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k) {
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;

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