#include <iostream>
using namespace std;

void program()
{

    long long n;

    cin >> n;

    if (n % 2 == 1) {
        cout << "YES" << endl;
        return;
    }

    while (n % 2 == 0)
        n /= 2;

    if (n > 1) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
    

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