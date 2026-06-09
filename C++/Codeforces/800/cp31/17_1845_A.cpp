#include <iostream>
using namespace std;


void program()
{
    int n, k, x;

    cin >> n >> k >> x;

    if (k == 1 && k == x) {
        cout << "NO" << endl;
        return;
    } 

    if (x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
        return;
    } else if (k == 2 && n % 2 != 0) {
        cout << "NO" << endl;
    } else if (k >= 2 && n % 2 == 0) {
        cout << "YES" << endl;
        cout << n/2 << endl;
        for (int i = 0; i < n/2; i++)
            cout << 2 << " ";
        cout << endl;
        return;
    } else {
        cout << "YES" << endl;
        cout << 1 + (n-3)/2 << endl;
        cout << 3 << " ";
        for (int i = 0; i < (n-3)/2; i++)
            cout << 2 << " ";
        cout << endl;
        return;
    }
    

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